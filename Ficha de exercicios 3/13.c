#include <stdio.h>

int main() {
    int n;
    long long int fatorial = 1;

    printf("Introduza um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: Nao existe fatorial de numero negativo.\n");
    } else {
        for (int i = 2; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }
    return 0;
}