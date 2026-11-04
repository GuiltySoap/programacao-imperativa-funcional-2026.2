#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double n1, n2, res;
    
    printf("Escolha a operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &n1, &n2);
    
    switch(op) {
        case '+': res = n1 + n2; printf("Resultado: %.2f\n", res); break;
        case '-': res = n1 - n2; printf("Resultado: %.2f\n", res); break;
        case '*': res = n1 * n2; printf("Resultado: %.2f\n", res); break;
        case '/': 
            if(n2 == 0) printf("Erro: Divisao por zero!\n");
            else printf("Resultado: %.2f\n", n1 / n2);
            break;
        case '^': res = pow(n1, n2); printf("Resultado: %.2f\n", res); break;
        default: printf("Operacao invalida!\n");
    }
    return 0;
}