#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base e o expoente (inteiro nao negativo): ");
    if (scanf("%d %d", &base, &expoente) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (expoente < 0) {
        printf("Erro: o expoente nao pode ser negativo.\n");
        return 1;
    }

    printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));

    return 0;
}

long potencia(int base, int expoente) {
    /* Caso base: qualquer numero elevado a 0 resulta em 1 */
    if (expoente == 0) {
        return 1L;
    }

    /* Passo recursivo: base^expoente = base * base^(expoente - 1) */
    return (long)base * potencia(base, expoente - 1);
}
