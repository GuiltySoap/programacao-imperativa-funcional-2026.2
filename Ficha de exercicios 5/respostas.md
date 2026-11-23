# Lista — Capítulo 5: Funções, Recursão e Pré-Processamento

## Parte I: Questões Teóricas e Analíticas

---

### Questão 01 — Anatomia de uma Função e o Papel do Protótipo

**a) Identificação e papel de cada etapa:**

- **Protótipo (declaração):** `float celsius(float);`
  - **Papel:** Informa antecipadamente ao compilador o nome da função, o tipo do valor de retorno (`float`) e a quantidade e os tipos dos parâmetros esperados (um `float`), antes que a função seja chamada na `main()`.
- **Chamada (invocação):** `c = celsius(f);`
  - **Papel:** Interrompe momentaneamente o fluxo da `main()`, copia o valor do argumento real (`f`) para o parâmetro formal da função (`fahr`), executa o corpo de `celsius()` e atribui o valor retornado à variável `c`.
- **Definição (implementação):**
  ```c
  float celsius(float fahr) {
      return (fahr - 32.0) * 5.0 / 9.0;
  }
  ```
  - **Papel:** Contém o cabeçalho completo (com o nome do parâmetro formal `fahr`) e o bloco de código com as instruções efetivas que calculam e retornam a temperatura em graus Celsius.

**b) Função do protótipo para o compilador e consequências da omissão:**

O protótipo permite que o compilador realize a **verificação de tipos (*type checking*)** no momento em que encontra uma chamada à função: ele confere se o número de argumentos está correto, verifica se os tipos passados são compatíveis (aplicando conversões implícitas quando necessário) e sabe exatamente qual tipo de dado esperar no retorno.

Se o protótipo fosse omitido e a definição ficasse depois da `main()`:
- Em padrões antigos da linguagem (C89/C90), o compilador não verificaria a quantidade nem os tipos dos parâmetros e assumiria uma **declaração implícita** retornando `int`. Ao encontrar posteriormente `float celsius(float)`, ocorreria erro de conflito de tipos (*conflicting types*).
- Em padrões modernos (C99, C11, C17 e C23), a declaração implícita foi removida da linguagem, de modo que omitir o protótipo gera aviso grave ou erro de compilação imediato por chamada a função não declarada.

**c) Tipo da função `celsius()` e justificativa:**

O tipo da função `celsius()` é **`float`**. Em C, o tipo de uma função é determinado pelo **tipo do valor que ela retorna**, e não pelos parâmetros que recebe, porque uma chamada de função atua dentro de expressões como um valor daquele tipo (por exemplo, sendo atribuída a `float c`, somada a outro número ou formatada em um `printf`). Os parâmetros definem apenas os dados de entrada necessários ao processamento, podendo inclusive ter tipos totalmente diferentes do tipo retornado.

---

### Questão 02 — O Comando `return` e suas Limitações

**a) Quantidade de valores retornados e análise de `calcular()`:**

Uma função em C pode devolver **no máximo um único valor** diretamente por meio do comando `return`.

Na função `calcular()`, o programador pretendia retornar dois valores simultaneamente (`soma` e `media`). No entanto, a abordagem falha porque, em C, a vírgula em `return soma, media;` atua como o **operador vírgula** (*comma operator*): ele avalia a expressão da esquerda (`soma`), descarta esse resultado, avalia a expressão da direita (`media`) e devolve **apenas o resultado da última expressão** (`media`). Assim, o valor de `soma` é ignorado e nunca chega ao chamador.

**b) Efeito e obrigatoriedade de `return;` em funções `void`:**

Dentro de `void imprime_mensagem(int erro)`, o comando `return;` (sem expressão) provoca o **encerramento imediato** da função, devolvendo o controle de execução para quem a chamou. No trecho analisado, quando `erro < 0`, a mensagem `"Erro invalido\n"` é impressa e o `return;` impede que a linha `printf("Codigo processado: %d\n", erro);` seja executada (técnica conhecida como *saída antecipada*).

O `return;` **não é obrigatório** ao final de uma função `void`: quando o fluxo de execução alcança a chave de fechamento `}`, a função termina automaticamente e retorna ao chamador.

**c) Reescrita em duas funções separadas e justificativa:**

```c
int calcular(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}

int calcular_soma(int a, int b, int c) {
    return a + b + c;
}
```
*(Observação: caso se deseje média com casas decimais, `calcular` pode ter tipo `float` e retornar `(a + b + c) / 3.0f`.)*

**Por que precisamos de duas funções usando apenas `return`:** Como a instrução `return` em C só transporta um único valor de retorno por chamada (não existe retorno múltiplo nativo de valores independentes), quando nos restringimos a devolver tipos escalares simples via `return` (sem recorrer a ponteiros como parâmetros de saída ou a uma `struct`), cada resultado distinto precisa ser calculado e devolvido por sua própria função.

---

### Questão 03 — Funções `void`, Parâmetros e Assinaturas

**a) Classificação dos protótipos:**

| Protótipo | Parâmetros de Entrada | Valor de Retorno |
| :--- | :--- | :--- |
| `void exibe_mensagem(char* msg);` | **Sim** (recebe `char* msg`, uma string) | **Não** (`void`) |
| `int obter_codigo(void);` | **Não** (`void` na lista de parâmetros) | **Sim** (retorna `int`) |
| `void limpar_tela(void);` | **Não** (`void` na lista de parâmetros) | **Não** (`void`) |

**b) Diferença prática entre função com retorno e procedimento (`void`):**

- **Função com retorno:** realiza um cálculo ou consulta e **devolve um resultado** ao chamador, podendo ser usada em atribuições, condicionais e expressões matemáticas.
  - *Exemplo adequado:* `float celsius(float fahr)` para converter uma temperatura e utilizar o valor convertido em cálculos ou exibição.
- **Procedimento (função `void`):** executa uma **ação ou efeito colateral** (como imprimir na tela, modificar o estado do terminal ou registrar um log) sem produzir um valor a ser reaproveitado em expressões.
  - *Exemplo adequado:* `void exibeMenu(void)` para apresentar opções formatadas ao usuário.

**c) Validade de `x = limpar_tela();`:**

A chamada é **inválida** e gera erro de compilação. Como o tipo de retorno de `limpar_tela()` é `void`, ela não produz nenhum valor ao terminar; logo, não existe dado algum que possa ser atribuído à variável `x`.

---

### Questão 04 — Recursão: Caso Base, Passo Recursivo e Pilha de Execução

**a) Caso base, passo recursivo e remoção do caso base:**

- **Caso base:** `n == 0`, que interrompe a recursão devolvendo diretamente `(long)1`.
- **Passo recursivo:** `(long)n * fatorial(n - 1)`, que resolve o problema chamando a própria função com um argumento menor (`n - 1`), convergindo para o caso base.
- **Se o caso base fosse removido:** não haveria condição de parada. A função continuaria chamando `fatorial(n - 1)` indefinidamente (`0`, `-1`, `-2`, `-3`, ...), gerando **recursão infinita** até esgotar a memória da pilha de execução (*Stack Overflow*) e encerrar o programa abruptamente com erro em tempo de execução.

**b) Rastreamento completo de `fatorial(4)`:**

**Fase de empilhamento (chamadas pendentes):**
1. `fatorial(4)` -> precisa calcular `4 * fatorial(3)` (chama `fatorial(3)`)
2. `fatorial(3)` -> precisa calcular `3 * fatorial(2)` (chama `fatorial(2)`)
3. `fatorial(2)` -> precisa calcular `2 * fatorial(1)` (chama `fatorial(1)`)
4. `fatorial(1)` -> precisa calcular `1 * fatorial(0)` (chama `fatorial(0)`)
5. `fatorial(0)` -> **caso base atingido!** Devolve `1`.

**Fase de desempilhamento (retorno dos valores):**
1. `fatorial(0)` devolve **`1`**
2. `fatorial(1)` calcula `1 * 1` e devolve **`1`**
3. `fatorial(2)` calcula `2 * 1` e devolve **`2`**
4. `fatorial(3)` calcula `3 * 2` e devolve **`6`**
5. `fatorial(4)` calcula `4 * 6` e devolve **`24`**

**c) Comportamento da pilha de execução (*call stack*) na memória:**

A cada chamada recursiva, o sistema reserva um novo **registro de ativação (*stack frame*)** no topo da pilha de execução para armazenar a cópia local do parâmetro `n`, variáveis locais e o endereço de retorno para onde a execução deve voltar após a subchamada terminar. Esses registros permanecem ocupando memória até que o caso base seja atingido e a pilha comece a ser desempilhada.

Como o tamanho da pilha de execução é **limitado**, uma recursão sem caso base (ou que não se aproxima dele) continua alocando registros de ativação sem nunca liberá-los, provocando o estouro da pilha (**Stack Overflow**) e a consequente falha fatal do programa.

---

### Questão 05 — Diretiva `#define`, Constantes e Macros com Argumentos

**a) Saída de cada `printf` e explicação:**

- **Primeiro `printf` (`SQR(2+3)`):** imprime **`25`**.
  - Expansão textual: `((2+3)*(2+3))` -> `5 * 5` = `25`.
- **Segundo `printf` (`DOBRO(2+3)`):** imprime **`8`**.
  - Expansão textual: `2+3*2`. Pela precedência dos operadores aritméticos em C, a multiplicação ocorre antes da soma: `2 + (3 * 2)` = `2 + 6` = `8` (em vez do esperado `10`).

**Por que diferem:** macros realizam **substituição textual literal** no pré-processamento, sem avaliar o argumento antes da substituição. Em `SQR(x)`, os parênteses de proteção em volta de `(x)` e de toda a expressão garantem que `2+3` seja avaliado como um bloco único antes da multiplicação. Em `DOBRO(x)`, a ausência de parênteses deixa o operador `*` se associar apenas ao `3`.

**b) Ausência de ponto e vírgula em `#define` e convenção de maiúsculas:**

- **Sem ponto e vírgula (`;`):** o pré-processador substitui o nome da constante por *todo* o texto após o espaço até o fim da linha. Se escrevêssemos `#define PI 3.14;`, uma expressão como `area = 4 * PI * r * r;` se transformaria em `area = 4 * 3.14; * r * r;`, gerando erro de sintaxe.
- **Identificadores em MAIÚSCULAS:** é uma convenção adotada em C para distinguir visualmente macros e constantes de pré-processador de variáveis e funções comuns, alertando o programador de que aquele nome sofrerá substituição textual direta (com possíveis efeitos colaterais em argumentos).

**c) Erro em `#define PRN (n) printf("%d", n)`, correção e diferença entre macro e função:**

- **Por que está incorreto:** há um **espaço** entre `PRN` e `(n)`. Para o pré-processador, isso define uma constante *sem argumentos* chamada `PRN` cujo valor de substituição é `(n) printf("%d", n)`, o que quebra qualquer chamada como `PRN(10)`.
- **Forma correta (sem espaço antes do parêntese):**
  ```c
  #define PRN(n) printf("%d", (n))
  ```
- **Diferença entre macro com argumentos e função comum:** uma macro é expandida textualmente antes da compilação — não gera custo de chamada de função na pilha, mas **não possui verificação de tipos** e pode avaliar um argumento mais de uma vez (causando bugs em expressões com efeitos colaterais, como `SQR(x++)`). Já uma função comum passa por verificação rigorosa de tipos pelo compilador, avalia cada argumento exatamente uma vez antes da chamada e utiliza a pilha de execução em tempo de execução.

---

### Questão 06 — Diretivas `#include`, `#undef` e Compilação Condicional

**a) Diferença entre `#include <stdio.h>` e `#include "areas.h"`:**

- **`#include <stdio.h>`** (com sinais `< >`): instrui o pré-processador a procurar o arquivo de cabeçalho diretamente nos **diretórios padrão do sistema / biblioteca padrão do compilador**. É usada para bibliotecas padrão da linguagem C e cabeçalhos instalados no sistema.
- **`#include "areas.h"`** (com aspas `" "`): instrui o pré-processador a procurar primeiro no **diretório local do projeto** (onde está o arquivo-fonte atual) e, caso não encontre, buscar nos diretórios padrão do sistema. É usada para arquivos de cabeçalho criados pelo próprio programador.

**b) Efeito de `#undef SOMA` e por que `#undef SOMA(x,y)` está incorreto:**

- **Efeito:** `#undef SOMA` cancela (remove) a definição da macro `SOMA` a partir daquele ponto do código-fonte. A partir dali, `SOMA` deixa de ser expandida pelo pré-processador e pode inclusive receber uma nova definição com `#define`.
- **Por que `#undef SOMA(x,y)` é incorreto:** a sintaxe da diretiva `#undef` aceita **exclusivamente o identificador (nome) da macro**, sem parênteses nem lista de parâmetros.

**c) Mensagem impressa sem `DEBUG`, momento da decisão e ausência no executável:**

- **Mensagem impressa:** `Modo normal`
- **Momento da decisão:** durante o **pré-processamento**, antes mesmo da compilação propriamente dita e muito antes da execução do programa.
- **Por que as diretivas não aparecem no executável final:** o pré-processador avalia todas as diretivas (`#include`, `#define`, `#undef`, `#ifdef`, `#else`, `#endif`), mantém apenas os trechos de código C que satisfazem as condições (neste caso, apenas `printf("Modo normal\n");`) e descarta completamente o ramo não escolhido e as próprias diretivas. O compilador recebe apenas esse código C limpo para traduzir em código de máquina, razão pela qual nenhuma diretiva chega ao arquivo executável.
