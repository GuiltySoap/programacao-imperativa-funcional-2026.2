#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long fatIter, fatRec;

    printf("Digite um numero inteiro nao negativo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada invalida. Informe um inteiro nao negativo.\n");
        return 1;
    }

    fatIter = fatorialIterativo(n);
    fatRec = fatorialRecursivo(n);

    printf("Fatorial iterativo de %d = %ld\n", n, fatIter);
    printf("Fatorial recursivo de %d = %ld\n", n, fatRec);

    if (fatIter == fatRec) {
        printf("Confirmado: os dois resultados coincidem.\n");
    } else {
        printf("Divergencia detectada entre as duas versoes.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= (long)i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    /* Caso base */
    if (n == 0) {
        return 1L;
    }
    /* Passo recursivo */
    return (long)n * fatorialRecursivo(n - 1);
}
