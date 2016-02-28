#include <stdio.h>

void main() {

  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  if((n % 2) == 0 && n != 0)
    printf("\nO numero digitado e' par. \n");
  else if((n % 2) != 0)
    printf("\nO numero digitado e' impar. \n");
  else if(n == 0)
    printf("\nO numero digitado e' 0. \n");
}
