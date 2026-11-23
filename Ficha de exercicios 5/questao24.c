#include <stdio.h>

/*
 * Compilacao condicional para depuracao:
 * - Para ativar o modo DEBUG, descomente a linha "#define DEBUG" abaixo OU
 *   compile passando a flag -DDEBUG:
 *       gcc -DDEBUG questao24.c -o questao24_debug
 * - Para compilar em modo normal (sem DEBUG):
 *       gcc questao24.c -o questao24_normal
 *
 * Diferenca de comportamento observada (exemplo para n = 4):
 * - COM #define DEBUG:
 *       [DEBUG] i = 1, soma parcial = 1
 *       [DEBUG] i = 2, soma parcial = 3
 *       [DEBUG] i = 3, soma parcial = 6
 *       [DEBUG] i = 4, soma parcial = 10
 *       Soma de 1 ate 4 = 10
 * - SEM #define DEBUG:
 *       Soma de 1 ate 4 = 10
 *   (O bloco #ifdef DEBUG e completamente removido pelo pre-processador antes
 *   da compilacao, nao gerando nenhuma impressao intermediaria nem codigo extra.)
 */
/* #define DEBUG */

int somaAteN(int n);

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));

    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}
