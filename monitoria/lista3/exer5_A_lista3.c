#include <stdio.h>

void main() {

    int cont;

    struct Aluno {
        int matricula;
        float n1, n2, n3, n4, media;
    };

    struct Aluno aluno[5];

    for(cont = 0; cont < 5; cont++) {
        //Matricula
        printf("\nMatricula: ");
        gets(aluno[cont].matricula);
        
        //Notas
        printf("Digite as 4 notas: ");
        scanf("%f %f %f %f", &aluno[cont].n1,
                             &aluno[cont].n2,
                             &aluno[cont].n3,
                             &aluno[cont].n4);
        //Calculo da media
        aluno[cont].media = ( aluno[cont].n1 +
                              aluno[cont].n2 +
                              aluno[cont].n3 +
                              aluno[cont].n4 ) / 4;
    }

    //Imprimir a media de cada aluno
    printf("\nMedia dos Alunos: \n");
    for(cont = 0; cont < 5; cont++)
        printf("Matricula: %d \tMedia: %f \n", aluno[cont].matricula, aluno[cont].media);
    puts("\n");
}
