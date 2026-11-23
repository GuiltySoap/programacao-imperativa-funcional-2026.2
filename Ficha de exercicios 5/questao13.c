#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float x, y;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha a operacao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Digite os dois operandos: ");
    if (scanf("%f %f", &x, &y) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(x, y));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(x, y));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(x, y));
            break;
        case 4:
            if (y == 0.0f) {
                printf("Erro: divisao por zero nao e permitida.\n");
            } else {
                printf("Resultado: %.2f\n", divide(x, y));
            }
            break;
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
