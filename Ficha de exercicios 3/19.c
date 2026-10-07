#include <stdio.h>

int main() {
    int n;
    long long int a = 1, b = 1, proximo;

    printf("Introduza o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n >= 1) printf("1 ");
    if (n >= 2) printf("1 ");

    for (int i = 3; i <= n; i++) {
        proximo = a + b;
        printf("%lld ", proximo);
        a = b;
        b = proximo;
    }
    printf("\n");
    
    return 0;
}