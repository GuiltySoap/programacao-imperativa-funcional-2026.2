#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("O numero e PAR e ");
    } else {
        printf("O numero e IMPAR e ");
    }
    
    if (num > 0) {
        printf("POSITIVO.\n");
    } else if (num < 0) {
        printf("NEGATIVO.\n");
    } else {
        printf("ZERO.\n");
    }
    return 0;
}