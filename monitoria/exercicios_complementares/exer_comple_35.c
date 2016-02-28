#include <stdio.h>

void main() {

  char nome[20];

  printf("\nDigite o seu nome: ");
  gets(nome);

  printf("\nExistem %d letras no seu nome.\n\n", strlen(nome));

}
