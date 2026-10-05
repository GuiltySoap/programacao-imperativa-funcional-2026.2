#include <stdio.h>

int main() {
    int tentativa = 1;
    int senhaDigitada;
    int senhaCorreta = 2026;
    int logado = 0; // 0 significa falso, 1 significa verdadeiro
    
    while(tentativa <= 3 && logado == 0) {
        printf("Tentativa %d/3. Digite a senha: ", tentativa);
        scanf("%d", &senhaDigitada);
        
        if (senhaDigitada == senhaCorreta) {
            printf("Acesso Concedido!\n");
            logado = 1; // Para o laço
        } else {
            printf("Senha incorreta!\n");
            tentativa++;
        }
    }
    
    if (logado == 0) {
        printf("Conta Bloqueada por Seguranca!\n");
    }
    
    return 0;
}
