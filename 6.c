//main()
//{
//int a=1; b=2; c=3:
//printf("0s números são: %d%d%d\n, a, b, c, d);
//}

//Erros de sintaxe: Apenas a e declarado com int. As variaveis b e c sao usadas como se ja estivessem declaradas, mas nao estao. 
// Elas precisam ser declaradas individualmente ou separadas por uma virgula em vez de um ponto e virgula, e no final tem dois pontos que nao deveria estar ali.
// A string literal nao foi fechada, pois falta a aspa de fechamento depois do \n antes da virgula que separa a string dos argumentos. 
// Alem disso d nao foi declarado e #include <stdio.h> e #include <stdlib.h> estao ausentes. 
// Sem elas, o compilador nao conhece os prototipos dessas funcoes.
//Erros de logica: A string de formato tem apenas tres especificadores %d, mas quatro variaveis sao passadas (a, b, c, d). 
// Mesmo corrigindo a sintaxe, isso causaria saida incorreta ou comportamento indefinido, pois sobra um argumento sem correspondencia.
// Alem disso, %d%d%d faria os tres numeros aparecerem colados na saida (tipo 123 em vez de 1 2 3), o que e um erro logico de formatacao.

