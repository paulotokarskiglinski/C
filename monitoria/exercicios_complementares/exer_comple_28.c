#include <stdio.h>

void main() {

  int cont, vet[10];

  for(cont = 0; cont < 10; cont++) {
    printf("Digite um valor: ");
    scanf("%d", &vet[cont]);
  }

  printf("\nNumeros positivos do vetor:\n");

  for(cont = 0; cont < 10; cont++) {
      if(vet[cont] >= 0)
        printf("%d,\t", vet[cont]);
  }
  puts("\n");
}
