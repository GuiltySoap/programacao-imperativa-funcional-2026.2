#include <stdio.h>

int main() {
    int op;
    printf("Menu SAC:\n1 - Consultar Saldo\n2 - Efetuar Extrato\n3 - Fazer Transferencia\n4 - Falar com Atendente\nOpcao: ");
    scanf("%d", &op);
    
    switch(op) {
        case 1: printf("Direcionando para Consulta de Saldo...\n"); break;
        case 2: printf("Direcionando para Emissao de Extrato...\n"); break;
        case 3: printf("Direcionando para Transferencias...\n"); break;
        case 4: printf("Aguarde, transferindo para um de nossos atendentes...\n"); break;
        default: printf("Erro: Opcao Invalida!\n"); break;
    }
    return 0;
}