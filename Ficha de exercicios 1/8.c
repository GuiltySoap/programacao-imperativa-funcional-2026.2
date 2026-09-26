#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}

//O programa executa três ações: ele vai imprimir uma string formatada no console usando printf(), com sequências de escape especiais.
// Antes do texto aparecer, o cursor pula uma linha com o \n e depois avança uma tabulação sendo ela \t. Só então o texto entre aspas é impresso
// O programa então chama o system("PAUSE"), que executa o comando PAUSE do sistema operacional (Windows) isso faz o console exibir a mensagem
// "Pressione qualquer tecla para continuar. . ." e pausa a execução do programa até que o usuário pressione uma tecla.
// E então finaliza com o retorno 0 ao sistema operacional, indicando que o programa terminou com sucesso.
