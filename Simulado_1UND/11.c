#include <stdio.h>

int main() {
    int dias;
    float salarioBruto, salarioComGratificacao, descontoImposto, salarioLiquido;
    
    printf("Dias trabalhados: ");
    scanf("%d", &dias);
    
    salarioBruto = dias * 45.00;
    salarioComGratificacao = salarioBruto + (salarioBruto * 0.05); // Adiciona 5%
    descontoImposto = salarioBruto * 0.08; // 8% sobre o bruto inicial
    
    salarioLiquido = salarioComGratificacao - descontoImposto;
    
    printf("--- HOLERITE ---\n");
    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Salario Liquido a receber: R$ %.2f\n", salarioLiquido);
    
    return 0;
}
