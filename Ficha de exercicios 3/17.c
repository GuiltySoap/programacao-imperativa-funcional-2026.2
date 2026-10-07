#include <stdio.h>

int main() {
    float nota, maior = -1.0, menor = 11.0, soma = 0.0;
    int total_alunos = 0;

    while (1) {
        printf("Introduza a nota (-1.0 para encerrar): ");
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota >= 0.0 && nota <= 10.0) {
            total_alunos++;
            soma += nota;
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        } else {
            printf("Nota invalida, ignorada.\n");
        }
    }

    if (total_alunos > 0) {
        printf("Total de alunos: %d\n", total_alunos);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / total_alunos);
    } else {
        printf("Nenhum aluno avaliado.\n");
    }

    return 0;
}