#include <stdio.h>

void main() {

    int cont;
    char op, nome[20];

    struct Funcionario {
        float salario;
        char nome[20];
    };

    struct Funcionario func[5];

    //Cadastrar funcionarios
    printf("\nCadastro de funcionarios: \n\n");
    for(cont = 0; cont < 5; cont++) {
        //Nome
        printf("Nome: ");
        scanf("%s", func[cont].nome);
        //Salario
        printf("Salario (R$): ");
        scanf("%f", &func[cont].salario);
    }
    puts("\n");
    printf("Deseja procurar um funcionario S/N? ");
    scanf("%s", &op);

    if(op == 's' || op == 'S') {
        printf("Digite o nome do funcionario que deseja: ");
        scanf("%s", nome);
        //Comparo o nome digitado com os nomes já cadastrados
        for(cont = 0; cont < 5; cont++)
            if(strcmp(nome, func[cont].nome) == 0)
                printf("\nFuncionario encontrado!\n");
    } else
        printf("\nPrograma encerrado!\n");

}
