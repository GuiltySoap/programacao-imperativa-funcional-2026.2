#include <stdio.h>

int main() {
    float valor;
    int opcao;
    
    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Opcao de pagamento: 1 - A Vista | 2 - Parcelado em 3x: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        float valor_final = valor * 0.90;
        printf("Valor final com desconto: R$ %.2f\n", valor_final);
        printf("Comissao do vendedor: R$ %.2f\n", valor_final * 0.05);
    } else if (opcao == 2) {
        printf("Valor da parcela (3x): R$ %.2f\n", valor / 3);
        printf("Comissao do vendedor: R$ %.2f\n", valor * 0.05);
    } else {
        printf("Opcao de pagamento invalida!\n");
    }
    return 0;
}