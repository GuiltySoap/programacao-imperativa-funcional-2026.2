#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos;
    
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);
    
    horas = totalSegundos / 3600; // 1 hora tem 3600 segundos
    minutos = (totalSegundos % 3600) / 60; // O que sobra divide por 60 para achar os minutos
    segundos = (totalSegundos % 3600) % 60; // O resto do resto sao os segundos finais
    
    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n", horas, minutos, segundos);
    return 0;
}
