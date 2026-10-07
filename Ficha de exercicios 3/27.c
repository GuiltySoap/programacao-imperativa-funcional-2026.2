#include <stdio.h>

int main() {
    int valor_saque;
    printf("Introduza o valor do saque: ");
    scanf("%d", &valor_saque);

    int cedulas[] = {100, 50, 20, 10, 5, 2};

    for (int i = 0; i < 6; i++) {
        int qtd_cedulas = 0;
        while (valor_saque >= cedulas[i]) {
            valor_saque -= cedulas[i];
            qtd_cedulas++;
        }
        if (qtd_cedulas > 0) {
            printf("%d cedula(s) de R$ %d\n", qtd_cedulas, cedulas[i]);
        }
    }

    if (valor_saque > 0) {
        printf("Impossivel sacar o valor restante de R$ %d com as notas disponiveis.\n", valor_saque);
    }
    return 0;
}