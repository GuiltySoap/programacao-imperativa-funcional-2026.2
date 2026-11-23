#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int termos, i;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    if (scanf("%d", &termos) != 1 || termos <= 0) {
        printf("Entrada invalida. Informe um inteiro positivo.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci (%d termos):\n", termos);
    for (i = 0; i < termos; i++) {
        printf("%ld%s", fibonacci(i), (i < termos - 1) ? " " : "\n");
    }

    return 0;
}

/*
 * Por que a versao recursiva fica lenta para valores grandes de n?
 * Cada chamada fibonacci(n) gera duas novas chamadas: fibonacci(n - 1) e
 * fibonacci(n - 2). Isso provoca um crescimento exponencial no numero de
 * chamadas — complexidade de tempo O(2^n) — pois os mesmos subproblemas sao
 * recalculados repetidas vezes (por exemplo, fibonacci(5) calcula fibonacci(3)
 * duas vezes e fibonacci(2) tres vezes). Para n >= 45, o numero de chamadas
 * passa facilmente da casa dos bilhoes, tornando a execucao muito lenta.
 */
long fibonacci(int n) {
    /* Casos base */
    if (n == 0) {
        return 0L;
    }
    if (n == 1) {
        return 1L;
    }

    /* Passo recursivo */
    return fibonacci(n - 1) + fibonacci(n - 2);
}
