#include <stdio.h>

void main() {

  int idade;
  char nome[20];

  do {
    printf("\nDigite o nome: ");
    gets(nome);
    fflush(stdin);

    printf("Digite a idade: ");
    scanf("%d", &idade);
    fflush(stdin);

  } while(idade < 18);
  puts("\n");
}
