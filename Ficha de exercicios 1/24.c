#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGURA_NOME 9
#define LARGURA_NOTA 5

int main()
{
    const char *alunos[] = { "ALINE", "MARIO", "SERGIO", "SHIRLEY" };
    const char *notas[]  = { "9.0",   "DEZ",   "4.5",    "7.0"     };
    int totalAlunos = sizeof(alunos) / sizeof(alunos[0]);
    int i;

    printf("%-*s %-*s\n", LARGURA_NOME, "ALUNO(A)", LARGURA_NOTA, "NOTA");

    for (i = 0; i < LARGURA_NOME; i++) printf("=");
    printf(" ");
    for (i = 0; i < LARGURA_NOTA; i++) printf("=");
    printf("\n");
    for (i = 0; i < totalAlunos; i++)
    {
        printf("%-*s %-*s\n", LARGURA_NOME, alunos[i], LARGURA_NOTA, notas[i]);
    }

    system("PAUSE");
    return 0;

}
