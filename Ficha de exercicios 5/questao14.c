#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int num;

    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Entrada invalida. Informe um inteiro nao negativo.\n");
        return 1;
    }

    printf("Soma dos digitos de %d = %d\n", num, somaDigitos(num));

    return 0;
}

int somaDigitos(int n) {
    /* Caso base: quando n possui apenas um digito (0 a 9), a soma e o proprio n */
    if (n < 10) {
        return n;
    }

    /* Passo recursivo: soma o ultimo digito (n % 10) com a soma dos demais (n / 10) */
    return (n % 10) + somaDigitos(n / 10);
}
