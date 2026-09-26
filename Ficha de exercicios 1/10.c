//Questão 10. A Linguagem C é conhecida por ser sensível a caixa alta e baixa (case sensitive). Explique
// o significado prático desse conceito. Identificadores como 'peso', 'Peso' e 'PESO' representam a mesma
// variável na memória? Assinale a alternativa correta e complemente com sua justificativa:

// a) Depende exclusivamente da implementação do compilador utilizado no sistema.
// b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
// c) Falso (letras maiúsculas e minúsculas são interpretadas como equivalentes pelo compilador).

// Resposta: b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
//C é uma linguagem case sensitive, que significa que o compilador trata letras maiúsculas e minúsculas como caracteres completamente diferentes ao interpretar identificadores.
//Isso vale para todo o código-fonte: nomes de variáveis, funções, macros, palavras reservadas, etc.
//Isso não é uma característica "opcional" ou dependente de configuração, isso está definido no próprio padrão da linguagem, e todo compilador C em conformidade com o padrão se comporta dessa forma.

// Não, pois, peso, Peso e PESO, são três variáveis distintas. Isso, porque, se fossem tratadas como a mesma coisa, esse código nem compilaria, pois seria uma redeclaração da mesma variável três vezes.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso = 70;
    int Peso = 80;
    int PESO = 90;

    printf("%d %d %d\n", peso, Peso, PESO);

    return 0;
}
