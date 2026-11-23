#include <stdio.h>

int soma(int a, int b);

int main(void) {
    int x, y, resultado;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    resultado = soma(x, y);
    printf("Soma: %d + %d = %d\n", x, y, resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}
