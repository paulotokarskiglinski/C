#include <stdio.h>

struct Aluno {
    int matric, nota;
    char nome[20];
};

struct Aluno aluno[3];

void main() {
    int cont;

    for(cont = 0; cont < 3; cont++) {
        printf("Insira o nome: ");
        gets(aluno[cont].nome);
        fflush(stdin);      //Windows
        //__fpurge(stdin);    //Linux

        printf("Insira a matricula: ");
        scanf("%d", &aluno[cont].matric);
        fflush(stdin);      //Windows
        //__fpurge(stdin);    //Linux

        printf("Insira a nota: ");
        scanf("%d", &aluno[cont].nota);
        fflush(stdin);      //Windows
        //__fpurge(stdin);    //Linux
    }

    for(cont = 0; cont < 3; cont++)
        printf("Matricula: %d\tNome: %s\tNota: %d \n", aluno[cont].matric,
                                                       aluno[cont].nome,
                                                       aluno[cont].nota);
}
