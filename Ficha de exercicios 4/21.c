#include <stdio.h>

int main() {
    float salario, aumento, novo;
    int cargo;
    
    printf("Salario atual: ");
    scanf("%f", &salario);
    printf("Cargo (1=Tecnico, 2=Gerente, 3=Demais): ");
    scanf("%d", &cargo);
    
    if (cargo == 1) {
        aumento = (salario <= 3000) ? 0.15 : 0.10;
    } else if (cargo == 2) {
        aumento = (salario <= 5000) ? 0.10 : 0.05;
    } else if (cargo == 3) {
        aumento = 0.08;
    } else {
        printf("Cargo invalido!\n");
        return 1;
    }
    
    float valor_aumento = salario * aumento;
    novo = salario + valor_aumento;
    printf("Aumento: R$ %.2f\nNovo salario: R$ %.2f\n", valor_aumento, novo);
    return 0;
}