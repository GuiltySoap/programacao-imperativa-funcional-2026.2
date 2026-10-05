#include <stdio.h>
#include <math.h>

int main() {
    float R, area, volume;
    const float PI = 3.14159265;
    
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &R);
    
    area = 4 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);
    
    // %.3f formata para 3 casas decimais
    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);
    
    return 0;
}
