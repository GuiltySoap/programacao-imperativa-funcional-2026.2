#include <stdio.h>

int main() {
    // Versão for
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Versão while
    int j = 0;
    while (j <= 100) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // Versão do-while
    int k = 0;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 100);
    printf("\n");

    return 0;
}