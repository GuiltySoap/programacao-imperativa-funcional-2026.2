#include <stdio.h>

int main() {
    int n, divisores = 0;
    printf("Introduza um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O numero %d e primo.\n", n);
    } else {
        printf("O numero %d NAO e primo. Possui %d divisores.\n", n, divisores);
    }
    return 0;
}