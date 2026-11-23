#include <stdio.h>

int ehPar(int n);

int main(void) {
    int num;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &num) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ehPar(num)) {
        printf("O numero %d e par.\n", num);
    } else {
        printf("O numero %d e impar.\n", num);
    }

    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
