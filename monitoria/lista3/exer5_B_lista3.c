#include <stdio.h>

void main() {

    int cont, maior = -1;

    struct Pessoa {
        int idade;
        char nome[20];
    };

    struct Pessoa pessoa[6];

    for(cont = 0; cont < 6; cont++) {
        //Nome
        printf("Nome: ");
        scanf("%s", pessoa[cont].nome);
        //Idade
        printf("Idade: ");
        scanf("%d", &pessoa[cont].idade);
    }
    puts("\n");
    //Imprimir a maior idade digitada
    for(cont = 0; cont < 6; cont++) {
        if(pessoa[cont].idade > maior)
            maior = pessoa[cont].idade;
    }
    printf("\nA maior idade digitada foi: %d\n\n", maior);
}
