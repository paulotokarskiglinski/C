#include <stdio.h>

void main() {

  int valor, cont, fat;

  printf("\nDigite um valor para saber o seu fatorial: ");
  scanf("%d", &valor);
  fat = valor;

  for(cont = valor - 1; cont >= 1; cont--) {
    fat *= cont;
  }
  printf("\nFatorial de %d = %d\n", valor, fat);
}
