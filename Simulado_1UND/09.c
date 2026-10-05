#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, area;
    
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    p = (a + b + c) / 2.0; // Semiperímetro
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    
    printf("A area do triangulo eh: %.2f\n", area);
    return 0;
}
