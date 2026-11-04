#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0) {
        printf("O coeficiente 'a' deve ser diferente de zero.\n");
        return 1;
    }
    
    delta = pow(b, 2) - 4 * a * c;
    
    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        printf("A raiz unica e x = %.2f\n", -b / (2 * a));
    } else {
        printf("As raizes sao x1 = %.2f e x2 = %.2f\n", 
               (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }
    return 0;
}