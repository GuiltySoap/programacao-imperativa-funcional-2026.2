#include <stdio.h>

int main() {
    float nota;
    
    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);
        
        if(nota < 0.0 || nota > 10.0) {
            printf("Erro: Nota invalida. Tente novamente.\n");
        }
    } while(nota < 0.0 || nota > 10.0); // Repete enquanto a nota estiver fora do limite
    
    printf("Nota aceita: %.2f\n", nota);
    return 0;
}
