#include <stdio.h>

void main() {

    int cont;

    struct Nasc {
        int dd, mm, aaaa;
    };

    struct Pessoa {
        struct Nasc nasc;
        float altura;
        char nome[20];
    };

    struct Pessoa pessoa[10];

    //Cadastro as pessoas
    for(cont = 0; cont < 10; cont++) {
        //Nome
        printf("\nNome: ");
        scanf("%s", pessoa[cont].nome);
        //Altura
        printf("Altura: ");
        scanf("%f", &pessoa[cont].altura);
        //Nascimento
        printf("Nascimento (Dia): ");
        scanf("%d", &pessoa[cont].nasc.dd);

        printf("Nascimento (Mes): ");
        scanf("%d", &pessoa[cont].nasc.mm);

        printf("Nascimento (Ano): ");
        scanf("%d", &pessoa[cont].nasc.aaaa);
    }

    //Imprimindo os dados das pessoas cadastradas
    printf("\nCadastro: \n");
    for(cont = 0; cont < 10; cont++) {
        printf("Nome: %s\tAltura: %0.2f\tNascimento: %d/%d/%d\n", pessoa[cont].nome,
                                                                  pessoa[cont].altura,
                                                                  pessoa[cont].nasc.dd,
                                                                  pessoa[cont].nasc.mm,
                                                                  pessoa[cont].nasc.aaaa);

    }
    puts("\n");
}
