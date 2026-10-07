#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int contador = 0;

    while (1) {
        printf("Introduza um valor (negativo para parar): ");
        scanf("%f", &valor);
        
        if (valor < 0) {
            break;
        }
        
        soma += valor;
        contador++;
    }

    if (contador > 0) {
        printf("Valores validos: %d\n", contador);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", soma / contador);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }

    return 0;
}