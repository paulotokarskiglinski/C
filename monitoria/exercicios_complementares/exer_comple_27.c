#include <stdio.h>

void main() {

  int cont, vet[10];

  for(cont = 0; cont < 10; cont++) {
    printf("Digite um valor: ");
    scanf("%d", &vet[cont]);
  }

  printf("\nVetor ao contrario:\n");

  for(cont = 9; cont >= 0; cont--) {
    printf("%d,\t", vet[cont]);
  }
  puts("\n");
}
