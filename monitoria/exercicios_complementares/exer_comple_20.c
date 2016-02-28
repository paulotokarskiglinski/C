#include <stdio.h>

void main() {

  int op, valor, cont=0, soma = 0;
  float media;

  do {
    printf("\nDigite um numero: ");
    scanf("%d", &valor);

    if(valor >= 0) {
      cont ++;
      soma += valor;
    }

  } while(valor >= 0);

  printf("\nEscolha uma opcao:\n1 - Somar os numeros digitados\n2 - Calcular a media dos numeros digitados\nEscolha: ");
  scanf("%d", &op);

  switch(op) {
    case 1: {
      printf("\nSoma dos numeros digitados: %d\n", soma);
      break;
    }
    case 2: {
      printf("\nMedia dos numeros digitados: %0.2f\n", media = soma / cont);
      break;
    }
  }
}
