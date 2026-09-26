#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(437);
#endif

    const char cantoSupEsq = '\xC9';
    const char cantoSupDir = '\xBB';
    const char cantoInfEsq = '\xC8';
    const char cantoInfDir = '\xBC';
    const char linhaHoriz  = '\xCD';
    const char linhaVert   = '\xBA';
    const char *linha1 = "Treinamento em programacao.";
    const char *linha2 = "Linguagem C.";

    int len1 = (int) strlen(linha1);
    int len2 = (int) strlen(linha2);
    int largura = (len1 > len2 ? len1 : len2) + 2;
    int i;

    printf("%c", cantoSupEsq);
    for (i = 0; i < largura; i++)
        printf("%c", linhaHoriz);
    printf("%c\n", cantoSupDir);
    printf("%c %-*s%c\n", linhaVert, largura - 1, linha1, linhaVert);
    printf("%c %-*s%c\n", linhaVert, largura - 1, linha2, linhaVert);
    printf("%c", cantoInfEsq);
    for (i = 0; i < largura; i++)
        printf("%c", linhaHoriz);
    printf("%c\n", cantoInfDir);

    system("PAUSE");
    return 0;
    
}
