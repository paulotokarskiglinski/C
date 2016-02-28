#include <stdio.h>

int main() {

    struct Banda {
        int integrantes;
        char nome[20], genero[20];
    };

    struct Banda banda;

    //Cadastro a banda
    printf("\nNome da banda: ");
    fgets(banda.nome, 20, stdin);

    printf("Genero: ");
    fgets(banda.genero, 20, stdin);

    printf("Numero de integrantes: ");
    scanf("%d", &banda.integrantes);

    //Imprimir os dados da banda
    printf("\n===== Banda =====\n");
    printf("Banda: %s\tGenero: %s\tN* integrantes: %d", banda.nome,
                                                        banda.genero,
                                                        banda.integrantes);
    puts("\n");

    return 0;

}
