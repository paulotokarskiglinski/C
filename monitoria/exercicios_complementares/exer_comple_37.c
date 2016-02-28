#include <stdio.h>

void main() {

  int cont, neg = 0, vet[10];

  printf("Digite os valores do vetor: \n");
  for(cont = 0; cont < 10; cont++) {
    scanf("%d", &vet[cont]);
    if(vet[cont] < 0)
      neg++;
  }

  printf("\nForam digitados %d numeros negativos no vetor.\n\n", neg);

}
