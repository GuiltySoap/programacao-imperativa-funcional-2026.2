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

    printf("Carro:\n");
    printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");   
    printf("\xDF""O\xDF\xDF\xDF\xDF\xDF""O\xDF\n");
    printf("\n");
    printf("Caminhonete:\n");
    printf("\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDF""O\xDF\xDF\xDF\xDF\xDF""O""O\xDF\n");

    system("PAUSE");
    return 0;
    
}
