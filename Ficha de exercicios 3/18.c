#include <stdio.h>

int main() {
    int num, inverso = 0;
    printf("Introduza um numero inteiro positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        inverso = inverso * 10 + (num % 10);
        num /= 10;
    }
    
    printf("Numero invertido: %d\n", inverso);
    return 0;
}