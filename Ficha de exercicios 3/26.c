#include <stdio.h>

int main() {
    int a, b, soma_primos = 0;
    printf("Introduza os valores de A e B: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i < 2) continue;
        
        int eh_primo = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                eh_primo = 0;
                break;
            }
        }
        
        if (eh_primo) {
            printf("%d ", i);
            soma_primos += i;
        }
    }
    
    printf("\nSoma total dos primos no intervalo: %d\n", soma_primos);
    return 0;
}