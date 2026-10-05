#include <stdio.h>

int main() {
    int N, i, j;
    int contador = 1; // Guarda qual numero vamos imprimir
    
    printf("Digite o tamanho do Triangulo (N): ");
    scanf("%d", &N);
    
    // Laço externo: controla a quantidade de linhas
    for(i = 1; i <= N; i++) {
        // Laço interno: escreve a quantidade de números igual ao número da linha atual (i)
        for(j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++; // Prepara o próximo número
        }
        printf("\n"); // Pula para a próxima linha após terminar os números da linha atual
    }
    
    return 0;
}
