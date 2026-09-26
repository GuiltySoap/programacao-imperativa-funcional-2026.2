//main()
//{
//    printf("Linguagem C");
//    system("pause");
//}
// No padrao ANSI C, o codigo esta errado, pois a funcao main() deve ser declarada com o tipo de retorno int. 
// Alem de faltar os #include no inicio do codigo.
// E tambem o return 0 deve ser colocado no final da funcao main() para indicar que o programa terminou com sucesso.
// A versao corrigida do codigo seria assim:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Linguagem C ");
    system("pause");

    return 0;
    
}
