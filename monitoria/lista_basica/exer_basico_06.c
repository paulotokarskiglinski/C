#include <stdio.h>

void main() {
	
  int a, b;
  
  printf("\nDigite o valor de a: ");
  scanf("%d", &a);
  
  b = (a * (a + 1)) / 2;
  
  printf("Resultado: %i", b);
  
}