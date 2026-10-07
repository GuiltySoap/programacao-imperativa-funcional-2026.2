#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char letra_secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;

    printf("Tente adivinhar a letra secreta (a-z)!\n");

    do {
        printf("O seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < letra_secreta) {
            printf("A letra secreta vem DEPOIS no alfabeto.\n");
        } else if (palpite > letra_secreta) {
            printf("A letra secreta vem ANTES no alfabeto.\n");
        }
    } while (palpite != letra_secreta);

    printf("Parabens! Acertou a letra '%c' em %d tentativas.\n", letra_secreta, tentativas);
    return 0;
}