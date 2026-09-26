#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(437);
#endif
    char cantoSupEsq = '\xC9';
    char cantoSupDir = '\xBB';
    char cantoInfEsq = '\xC8';
    char cantoInfDir = '\xBC';
    char linhaHoriz  = '\xCD';
    char linhaVert   = '\xBA';

    printf("%c%c%c%c\n", cantoSupEsq, linhaHoriz, linhaHoriz, cantoSupDir);
    printf("%c  %c\n", linhaVert, linhaVert);
    printf("%c  %c\n", linhaVert, linhaVert);
    printf("%c%c%c%c\n", cantoInfEsq, linhaHoriz, linhaHoriz, cantoInfDir);

    system("PAUSE");
    return 0;
    
}
