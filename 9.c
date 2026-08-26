#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}

//A primeira linha possui três especificadores %c, cada um substituído por um caractere simples (não uma string).
// '\n'	pula para a linha seguinte, '\t' avança até a próxima parada de tabulação, '\"'	imprime o caractere ",
// depois, o texto escrito "Primeiro programa" é impresso.
//A segunda linha é um erro de tipo, não um uso correto. O printf("%c", "\""), está passando um ponteiro (endereço de memória) para um especificador que espera um inteiro/caractere. 
// Isso é uma incompatibilidade de tipos, e o compilador normalmente emite um aviso, mas dependendo da arquitetura e do compilador, o %c vai interpretar os bits do ponteiro (o endereço de memória)
// como se fossem um valor de caractere, geralmente pegando os bits menos significativos do endereço e convertendo para unsigned char. O resultado costuma ser um caractere "lixo", sem relação nenhuma com ", 
// e pode até variar a cada execução, dependendo de onde a string ficou alocada na memória.
// Ou seja, essa linha não imprime " de forma confiável, ela imprime algo imprevisível.
// No final das contas, o resultado da impressão é ("Primeiro programa|Press any key to continue . . .").
