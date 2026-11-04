#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite os tres angulos internos: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        if (a == 90 || b == 90 || c == 90) {
            printf("Retangulo\n");
        } else if (a > 90 || b > 90 || c > 90) {
            printf("Obtusangulo\n");
        } else {
            printf("Acutangulo\n");
        }
    } else {
        printf("Erro: Nao formam um triangulo.\n");
    }
    return 0;
}