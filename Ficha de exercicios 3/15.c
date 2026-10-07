#include <stdio.h>

int main() {
    int num, encontrou = 0;
    printf("Introduza o valor de NUM: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    
    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao.\n");
    } else {
        printf("\n");
    }
    return 0;
}