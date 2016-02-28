#include <stdio.h>

void main() {

  int ini, fim, cont, op;

  printf("\nEscolha uma opcao:\n1 - Listar numeros pares\n2 - Listar numeros impares\nEscolha: ");
  scanf("%d", &op);

  printf("\nEscolha um intervalo\n");
  printf("\nValore inicial: ");
  scanf("%d", &ini);

  printf("\nValor final: ");
  scanf("%d", &fim);

  switch (op) {
    case 1: {
      for(cont = ini; cont <= fim; cont++) {
        if((cont % 2) == 0)
          printf("\n%d", cont);
      }
      puts("\n");
      break;
    }
    case 2: {
      for(cont = ini; cont <= fim; cont++) {
        if((cont % 2) != 0)
          printf("\n%d", cont);
      }
      puts("\n");
      break;
    }
  }

}
