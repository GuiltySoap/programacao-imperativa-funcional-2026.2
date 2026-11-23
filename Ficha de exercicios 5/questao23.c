#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    /*
     * Por que os resultados diferem?
     * - Na macro DOBRO(2+3), o pre-processador faz substituicao textual literal:
     *   DOBRO(2+3) vira 2+3*2. Por precedencia de operadores, 3*2 e calculado
     *   primeiro (6), e depois somado a 2, resultando em 8.
     * - Na funcao dobro(2+3), a expressao 2+3 e avaliada ANTES da chamada (5),
     *   e entao multiplicada por 2, resultando corretamente em 10.
     */
    printf("Macro sem parenteses DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3)               = %d\n", dobro(2+3));

    /* Corrigindo a macro com parenteses de protecao */
    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    /*
     * Agora DOBRO(2+3) expande para ((2+3) * 2) = (5 * 2) = 10,
     * coincidindo com o resultado da funcao.
     */
    printf("Macro corrigida DOBRO(2+3)      = %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}
