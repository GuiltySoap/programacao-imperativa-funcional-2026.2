#include <stdio.h>

int main() {
    int n;
    printf("Introduza uma dimensao impar (3 a 19): ");
    scanf("%d", &n);

    if (n >= 3 && n <= 19 && n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i || j == (n - 1 - i)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else {
        printf("Dimensao invalida.\n");
    }
    return 0;
}