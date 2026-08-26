//#include <stdio.h>
//#include <stdlib.h>; Tem um ponto e virgula desnecessario aqui

//int Main{} Trocou as chaves e os parenteses de lugar, e o 'M' de Main esta maiusculo
//(
//   printf( Existem %d semanas no ano.,52); Faltou as aspas duplas e o \n no final da string
//   cout << endl; Esses dois comandos nao sao validos em C, apenas em C++
//   system("PAUSE");
//   return 0;
//)
//Versao corrigida:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;

}
