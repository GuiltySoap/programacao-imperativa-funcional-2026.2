#include <stdio.h>

int main() {
    float valor, precoFinal;
    int uf;
    
    printf("Valor do produto: ");
    scanf("%f", &valor);
    printf("Estado destino (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &uf);
    
    switch(uf) {
        case 1: precoFinal = valor * 1.07; break;
        case 2: precoFinal = valor * 1.12; break;
        case 3: precoFinal = valor * 1.15; break;
        case 4: precoFinal = valor * 1.08; break;
        default: printf("Erro: Estado invalido!\n"); return 1;
    }
    printf("Preco final acrescido do imposto: R$ %.2f\n", precoFinal);
    return 0;
}