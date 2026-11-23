#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int num, i;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &num) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ehPrimo(num)) {
        printf("O numero %d e primo.\n", num);
    } else {
        printf("O numero %d nao e primo.\n", num);
    }

    printf("Numeros primos de 1 ate 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    int i;

    if (n <= 1) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
