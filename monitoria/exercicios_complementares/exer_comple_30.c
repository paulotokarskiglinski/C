#include <stdio.h>

void main() {

  int valor, cont, vet[15], sel = 0;

  for(cont = 0; cont < 15; cont++) {
    printf("Digite um valor para o vetor: ");
    scanf("%d", &vet[cont]);
  }

  puts("\n");

  printf("Digite um valor para ser buscado no vetor: ");
  scanf("%d", &valor);

  for(cont = 0; cont < 15; cont++) {
    if(vet[cont] == valor)
      sel++;
  }

  if(sel > 0)
    printf("\nValor encontrado!\n");
  else
    printf("\nAviso: Valor nao econtrado!\n");

}
