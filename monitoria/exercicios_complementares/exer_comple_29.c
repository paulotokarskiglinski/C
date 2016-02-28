#include <stdio.h>

void main() {

  int cont, veta[5], vetb[5], vetc[5];

  for(cont = 0; cont < 5; cont++) {
    printf("Digite um valor para o vetor A: ");
    scanf("%d", &veta[cont]);
  }
  puts("\n");
  for(cont = 0; cont < 5; cont++) {
    printf("Digite um valor para o vetor B: ");
    scanf("%d", &vetb[cont]);
  }

  for(cont = 0; cont < 5; cont++)
    vetc[cont] = veta[cont] + vetb[cont];

  printf("\nVetor A: ");
  for(cont = 0; cont < 5; cont++)
    printf("%d, \t", veta[cont]);

  printf("\nVetor B: ");
  for(cont = 0; cont < 5; cont++)
    printf("%d, \t", vetb[cont]);

  printf("\nVetor resultante da soma dos vetores A e B: ");
  for(cont = 0; cont < 5; cont++)
    printf("%d, \t", vetc[cont]);

  puts("\n");
}
