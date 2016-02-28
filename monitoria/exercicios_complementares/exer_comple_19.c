#include <stdio.h>

void main() {

  int valor, cont=0;

  do {
    printf("\nDigite um numero: ");
    scanf("%d", &valor);

    if(valor >= 0)
      cont ++;
  } while(valor >= 0);
  printf("\nForam digitados %d numeros positivos antes do numero negativo.\n", cont);
}
