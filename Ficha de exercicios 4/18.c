#include <stdio.h>

int main() {
    int op;
    float temp, convertida;
    
    printf("Menu de Conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Opcao: ");
    scanf("%d", &op);
    
    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    
    switch(op) {
        case 1: convertida = temp * 1.8 + 32; break;
        case 2: convertida = temp + 273.15; break;
        case 3: convertida = (temp - 32) / 1.8; break;
        case 4: convertida = temp - 273.15; break;
        default: printf("Opcao invalida!\n"); return 1;
    }
    printf("Resultado: %.2f\n", convertida);
    return 0;
}