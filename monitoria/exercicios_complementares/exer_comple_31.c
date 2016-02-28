#include <stdio.h>
#include <string.h>

void main() {

  int cont ,len;
  char nome[20];

  printf("Digite o seu nome: ");
  gets(nome);

  len = strlen(nome);

  for(cont = len; cont >= 0; cont--)
    printf("%c", nome[cont]);
  puts("\n");
}
