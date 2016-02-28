#include <stdio.h>

void main() {

  int cont, valor;

  printf("\nDigite o valor da tabuada que voce deseja: ");
  scanf("%d", &valor);

  for(cont = 0; cont <= 10; cont++) {
    printf("%d X %d = %d\n", cont, valor, valor * cont);
  }
  puts("\n");
}
