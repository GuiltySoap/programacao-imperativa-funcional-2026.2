#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preco unitario do produto: ");
    if (scanf("%f", &preco) != 1 || preco < 0.0f) {
        printf("Preco invalido.\n");
        return 1;
    }

    printf("Digite a quantidade: ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    printf("Forma de pagamento (1 - A vista com 10%% de desconto | 2 - A prazo/Cartao): ");
    if (scanf("%d", &opcaoPagamento) != 1 || (opcaoPagamento != 1 && opcaoPagamento != 2)) {
        printf("Opcao de pagamento invalida.\n");
        return 1;
    }

    printf("Digite o valor pago pelo cliente: ");
    if (scanf("%f", &pago) != 1 || pago < 0.0f) {
        printf("Valor pago invalido.\n");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);
    troco = calculaTroco(total, pago);

    printf("\n=== RESUMO DA COMPRA ===\n");
    printf("Subtotal:      R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    if (troco < 0.0f) {
        printf("Valor pago insuficiente! Faltam R$ %.2f\n", -troco);
    } else {
        printf("Troco:         R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * (float)quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
