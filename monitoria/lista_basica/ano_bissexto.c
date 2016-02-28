#include <stdio.h>

int main() {

  int inicio = 0, fim = 0, cont = 0;

  printf("\nDigite o ano inicial: ");
  scanf("%d", &inicio);

  printf("Digite o ano final: ");
  scanf("%d", &fim);

  for(cont = inicio; cont <= fim; cont++) {
    if((cont % 400) == 0)
      printf("\nAno: %d", cont);
    else if((cont % 4) == 0 && (cont % 100) != 0)
      printf("\nAno: %d", cont);
  }

  printf("\n\n");

  return 0;
}
