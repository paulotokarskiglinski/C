#include <stdio.h>

void main() {

    int cont;

    struct Pessoa {
        int idade;
        char nome[20], end[20], fone[20];
    };

    struct Pessoa pessoa[10];

    //Cadastrar pessoas
    for(cont = 0; cont < 10; cont++) {
        //Nome
        printf("\nNome: ");
        scanf("%s", pessoa[cont].nome);
        //Idade
        printf("Idade: ");
        scanf("%d", &pessoa[cont].idade);
        //Endereco
        printf("Endereco: ");
        scanf("%s", pessoa[cont].end);
        //Telefone
        printf("Telefone: ");
        scanf("%s", pessoa[cont].fone);
        puts("\n");
    }

    //Exibir as pessoas cadastradas
    printf("\nPessoas cadastradas: \n");
    for(cont = 0; cont < 10; cont++) {
        printf("Nome: %s\tIdade: %d\tEndereco: %s\tTelefone: %s\n", pessoa[cont].nome,
                                                                    pessoa[cont].idade,
                                                                    pessoa[cont].end,
                                                                    pessoa[cont].fone);
    }

}
