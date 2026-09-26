#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("%-12s | %-45s | %-15s\n", "Constante", "Classificacao (Tipo de Constante)", "Tipo Base em C");
    printf("-------------------------------------------------------------------------------\n");

    printf("%-12s | %-45s | %-15s\n", "\\r",      "Sequencia de escape",      "char");
    printf("%-12s | %-45s | %-15s\n", "2130",     "Constante inteira decimal",                    "int");
    printf("%-12s | %-45s | %-15s\n", "-123",     "Constante inteira decimal negativa",         "int");
    printf("%-12s | %-45s | %-15s\n", "33.28",    "Constante de ponto flutuante",                 "double");
    printf("%-12s | %-45s | %-15s\n", "0XFA",     "Constante inteira hexadecimal",                "int");
    printf("%-12s | %-45s | %-15s\n", "0101",     "Constante inteira octal",                      "int");
    printf("%-12s | %-45s | %-15s\n", "2.0e30",   "Constante de ponto flutuante exponencial",   "double");
    printf("%-12s | %-45s | %-15s\n", "\\xDC",     "Sequencia de escape hexadecimal",              "char");
    printf("%-12s | %-45s | %-15s\n", "'\\\"'",    "Constante de caractere aspas duplas",        "char");
    printf("%-12s | %-45s | %-15s\n", "'\\\\'",    "Constante de caractere barra invertida",     "char");
    printf("%-12s | %-45s | %-15s\n", "'F'",      "Constante de caractere",                       "char");
    printf("%-12s | %-45s | %-15s\n", "0",        "Constante inteira decimal",                    "int");
    printf("%-12s | %-45s | %-15s\n", "'\\0'",     "Constante de caractere caractere nulo",      "char");
    printf("%-12s | %-45s | %-15s\n", "\"F\"",     "Constante string",                             "char*");
    printf("%-12s | %-45s | %-15s\n", "-4567.89", "Constante de ponto flutuante negativa",      "double");

    system("PAUSE");

    return 0;

}
