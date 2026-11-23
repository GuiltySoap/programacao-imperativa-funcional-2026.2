#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int opcao;
    float temp;

    printf("=== CONVERSOR DE TEMPERATURAS ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    if (scanf("%f", &temp) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f F\n", celsiusParaFahrenheit(temp));
            break;
        case 2:
            printf("Resultado: %.2f K\n", celsiusParaKelvin(temp));
            break;
        case 3:
            printf("Resultado: %.2f C\n", fahrenheitParaCelsius(temp));
            break;
        case 4:
            printf("Resultado: %.2f C\n", kelvinParaCelsius(temp));
            break;
    }

    return 0;
}

float celsiusParaFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}
