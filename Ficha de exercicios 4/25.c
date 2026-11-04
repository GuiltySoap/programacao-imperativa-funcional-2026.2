#include <stdio.h>

int main() {
    int pagar, pago, troco;
    printf("Valor a pagar e valor entregue: ");
    scanf("%d %d", &pagar, &pago);
    
    if (pago < pagar) {
        printf("Erro: Valor insuficiente!\n");
    } else {
        troco = pago - pagar;
        printf("Troco total: R$ %d\n", troco);
        
        int n100 = troco / 100; troco %= 100;
        int n50 = troco / 50; troco %= 50;
        int n20 = troco / 20; troco %= 20;
        int n10 = troco / 10; troco %= 10;
        int n5 = troco / 5; troco %= 5;
        int n2 = troco / 2; troco %= 2;
        
        if (n100) printf("%d cedula(s) de 100\n", n100);
        if (n50) printf("%d cedula(s) de 50\n", n50);
        if (n20) printf("%d cedula(s) de 20\n", n20);
        if (n10) printf("%d cedula(s) de 10\n", n10);
        if (n5) printf("%d cedula(s) de 5\n", n5);
        if (n2) printf("%d cedula(s) de 2\n", n2);
        if (troco == 1) printf("1 moeda(s) de 1\n");
    }
    return 0;
}