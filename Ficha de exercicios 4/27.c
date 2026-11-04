#include <stdio.h>

int main() {
    int h;
    float preco = 0;
    
    printf("Horas de permanencia: ");
    scanf("%d", &h);
    
    if (h == 1) preco = 2.0;
    else if (h == 2) preco = 4.0;
    else if (h == 3) preco = 4.0 + 2.5;
    else if (h == 4) preco = 4.0 + 5.0;
    else if (h >= 5) preco = 9.0 + (h - 4) * 3.0;
    
    printf("Tempo total: %d hora(s)\n", h);
    printf("Valor cobrado: R$ %.2f\n", preco);
    return 0;
}