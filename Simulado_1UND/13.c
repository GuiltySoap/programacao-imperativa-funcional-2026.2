#include <stdio.h>

int main() {
    int N, i;
    long long int fatorial = 1;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    
    if (N < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        // Multiplica o fatorial pelos números de 1 até N
        for(i = 1; i <= N; i++) {
            fatorial *= i; 
        }
        printf("Fatorial de %d! = %lld\n", N, fatorial);
    }
    return 0;
}
