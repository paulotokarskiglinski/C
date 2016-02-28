#include <stdio.h>

void main() {

  int n1, n2;

  printf("Digite um valor: ");
  scanf("%d", &n1);

  printf("Digite outro valor: ");
  scanf("%d", &n2);

  if(n1 > n2)
    printf("\n%d e' maior que %d \n", n1, n2);
  else if(n2 > n1)
    printf("\n%d e' maior que %d \n", n2, n1);
  else if(n1 == n2)
    printf("\nOs numeros digitados sao iguais!\n");
}
