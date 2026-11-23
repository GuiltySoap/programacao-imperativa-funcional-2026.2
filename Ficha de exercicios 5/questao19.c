#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: informe um numero inteiro positivo.\n");
        return 1;
    }

    printf("Contagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente (1 ate %d):\n", n);
    contagemCrescente(n);

    return 0;
}

/*
 * Versao regressiva (n ate 1):
 * O printf ocorre ANTES da chamada recursiva. Assim, os numeros sao exibidos
 * durante a fase de empilhamento (de n descendo ate 1) e, ao atingir o caso
 * base (n == 0), imprime "Fogo!".
 */
void contagem(int n) {
    /* Caso base */
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    /* Passo recursivo */
    contagem(n - 1);
}

/*
 * Versao crescente (1 ate n):
 * O printf ocorre DEPOIS da chamada recursiva. Assim, a funcao empilha todas
 * as chamadas ate atingir o caso base (n == 0) sem imprimir nada; os numeros
 * passam a ser exibidos somente durante o desempilhamento (de 1 subindo ate n).
 */
void contagemCrescente(int n) {
    /* Caso base */
    if (n == 0) {
        return;
    }

    /* Passo recursivo antes do printf */
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
