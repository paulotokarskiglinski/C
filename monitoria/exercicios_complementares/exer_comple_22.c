#include <stdio.h>

void main() {

  int cont;

  printf("\nNumeros impares de 0 - 1000: \n");
  for(cont = 0; cont <= 1000; cont++) {
    if((cont % 2) != 0)
      printf("%d\n", cont);
  }
  puts("\n");
}
