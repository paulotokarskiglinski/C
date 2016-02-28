#include <stdio.h>

void main() {

  int cont;

  printf("\nNumeros pares de 0 - 1000: \n");
  for(cont = 2; cont <= 1000; cont++) {
    if((cont % 2) == 0)
      printf("%d\n", cont);
  }
  puts("\n");
}
