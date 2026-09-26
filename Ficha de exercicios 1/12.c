#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    float b = 2.5f;
    unsigned char d = 200;
    unsigned e = 10;
    long g = 100000L;
    long double h = 3.14159L;
    
    printf("\n");
    printf("%-22s | %-10s | %s\n", "Instrucao", "Status", "Justificativa");
    printf("---------------------------------------------------------------------------------------\n");

    printf("%-22s | %-10s | %s\n", "int a;", "Correto", "Declaracao int simples e valida.");
    printf("%-22s | %-10s | %s\n", "float b;", "Correto", "Declaracao float simples e valida.");
    printf("%-22s | %-10s | %s\n", "double float c;", "Incorreto", "Dois tipos base completos sao incompativeis juntos.");
    printf("%-22s | %-10s | %s\n", "unsigned char d;", "Correto", "unsigned + char e uma combinacao valida.");
    printf("%-22s | %-10s | %s\n", "unsigned e;", "Correto", "unsigned sozinho assume um int implicito.");
    printf("%-22s | %-10s | %s\n", "long float f;", "Incorreto", "long nao e um modificador valido para float.");
    printf("%-22s | %-10s | %s\n", "long g;", "Correto", "long sozinho assume um int implicito.");
    printf("%-22s | %-10s | %s\n", "long double h;", "Correto", "long + double e tipo valido (long double).");

    printf("\n Confirmando que as declaracoes validas realmente funcionam \n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("d = %u\n", d);
    printf("e = %u\n", e);
    printf("g = %ld\n", g);
    printf("h = %.5Lf\n", h);

    system("PAUSE");
    return 0;

}
