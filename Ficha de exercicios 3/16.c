#include <stdio.h>

int main() {
    const int SENHA_SECRETA = 2026;
    int tentativa, cont = 0;

    while (cont < 3) {
        printf("Introduza a senha: ");
        scanf("%d", &tentativa);
        cont++;

        if (tentativa == SENHA_SECRETA) {
            printf("Acesso Concedido! Tentativas utilizadas: %d\n", cont);
            return 0;
        } else {
            printf("Senha incorreta.\n");
        }
    }
    
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}