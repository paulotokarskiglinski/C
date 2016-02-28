#include <stdio.h>

void main() {

  int cont;
  float valor, soma = 0;

  for(cont = 0; cont < 10; cont++) {
    printf("Digite o %d* valor: ", cont + 1);
    scanf("%f", &valor);

    soma += valor;
  }
  printf("\nMedia dos numeros digitados: %0.2f\n\n", soma / 10);
}
