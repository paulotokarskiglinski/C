#include <stdio.h>

void main() {
  char nome[10];
  int cont;

  printf("Digite um nome: ");
  gets(nome);

  for(cont = 0; cont < nome.length; cont++) {
    printf("%s", nome[cont]);
  }

}
