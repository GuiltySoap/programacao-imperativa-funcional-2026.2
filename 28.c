#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    double media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;
    printf("\nA media aritmetica dos valores e: %.2f\n", media);

    system("PAUSE");
    return 0;

}
