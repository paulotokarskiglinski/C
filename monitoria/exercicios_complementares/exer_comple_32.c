#include <stdio.h>

void main() {

  int cont;
  char nome[20];

  printf("Digite o seu nome: ");
  gets(nome);

  puts("\n");
  for(cont = 0; cont < 10; cont++)
    printf("%s\n", nome);

  puts("\n");

}
