#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int a, b;

    printf("Digite dois inteiros positivos (numerador e denominador): ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Entrada invalida. Informe dois inteiros positivos.\n");
        return 1;
    }

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);

    return 0;
}

int mdc(int a, int b) {
    /* Caso base: quando b == 0, o MDC e a */
    if (b == 0) {
        return a;
    }
    /* Passo recursivo: Algoritmo de Euclides -> mdc(a, b) = mdc(b, a % b) */
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor;

    if (den == 0) {
        printf("Erro: denominador nao pode ser zero.\n");
        return;
    }

    divisor = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}
