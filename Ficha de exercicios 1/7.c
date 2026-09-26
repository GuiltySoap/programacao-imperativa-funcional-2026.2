//a) printf("\n\tBom dia! Shirley.");
//Saída:\n quebra de linha, ou seja,pula para a linha seguinte, antes de imprimir o texto. \t tabulação avança o cursor até a próxima parada de tabulação.
// Depois imprime o texto normalmente.


//	Bom dia! Shirley.

//b) printf("Você já tomou café? \n");
//Saída: Imprime o texto normalmente, incluindo o espaço antes do \n. \n no final quebra a linha após o texto.

//Você já tomou café?

//c) printf("\n\nA solução não existe!\nNão insista.");
//Saída: \n\n duas quebras de linha ou seja duas linhas em branco antes do texto. Imprime "A solução não existe!" \n quebra da linha. 
// Imprime "Não insista." sem quebra de linha no final.



//A solução não existe!
//Não insista.

//d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
//Saída: Imprime "Duas", tabulação, "linhas", tabulação, "de", tabulação, "saída". \n quebra de linha.
// Imprime "ou", tabulação, "uma?" sem quebra de linha no final.

//Duas linhas de saída
//ou uma?

//e) printf("%s\n%s\n%s\n", "um", "dois", "três");
//Saída: Substitui cada %s pela string correspondente, na ordem: "um", "dois", "três" cada uma seguida de \n

//um
//dois
//três
