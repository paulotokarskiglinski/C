#include <stdio.h>

void main() {

  int idade;
  char nome[20];

  printf("\nDigite o nome: ");
  gets(nome);

  printf("Digite a idade: ");
  scanf("%d", &idade);

  if(idade >= 18)
    printf("\nMaior de idade - Nome: %s \t idade: %d\n\n", nome, idade);
  else
    printf("\nMenor de idade - Nome: %s\n\n", nome);

}
