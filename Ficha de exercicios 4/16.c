#include <stdio.h>

int main() {
    float km, litros, consumo;
    printf("Digite a distancia percorrida e os litros consumidos: ");
    scanf("%f %f", &km, &litros);
    
    consumo = km / litros;
    printf("Consumo: %.2f km/l\n", consumo);
    
    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8.0 && consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }
    return 0;
}