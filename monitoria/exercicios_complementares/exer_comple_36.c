#include <stdio.h>

void main() {

  int cont, len, vogais = 0, consoantes = 0;
  char nome[20];

  printf("\nDigite o seu nome: ");
  gets(nome);

  len = strlen(nome);

  for(cont = 0; cont < len; cont++) {
    if(nome[cont] == 'a' || nome[cont] == 'A' || nome[cont] == 'e' || nome[cont] == 'E' || nome[cont] == 'i' || nome[cont] == 'I' || nome[cont] == 'o' || nome[cont] == 'O' || nome[cont] == 'u' || nome[cont] == 'U')
      vogais++;
    else
      consoantes++;
  }

  printf("\nExistem %d vogais no seu nome;", vogais);
  printf("\nExistem %d consoantes no seu nome.\n\n", consoantes);

}
