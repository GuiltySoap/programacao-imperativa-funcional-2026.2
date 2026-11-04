#include <stdio.h>

int main() {
    float lab, sem, final_exam, media;
    
    printf("Digite as notas (Trabalho, Semestral, Exame Final): ");
    scanf("%f %f %f", &lab, &sem, &final_exam);
    
    media = (lab * 2 + sem * 3 + final_exam * 5) / 10.0;
    printf("Media Ponderada: %.2f\n", media);
    
    if (media >= 5.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
    return 0;
}