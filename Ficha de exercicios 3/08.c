#include <stdio.h>

int main() {
    float nota;
    do {
        printf("Introduza uma nota valida (0.0 a 10.0): ");
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: Valor fora do intervalo permitido.\n");
        }
    } while (nota < 0.0 || nota > 10.0);
    
    printf("Nota registada com sucesso!\n");
    return 0;
}