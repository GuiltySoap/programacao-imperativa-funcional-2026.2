#include <stdio.h>

float celsius(float fahr);

int main(void) {
    float f, c;

    printf("Digite a temperatura em graus Fahrenheit: ");
    if (scanf("%f", &f) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    c = celsius(f);
    printf("Temperatura em Celsius: %.2f\n", c);

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
