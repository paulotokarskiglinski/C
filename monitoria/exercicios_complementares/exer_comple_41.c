#include <stdio.h>

void main() {

  int l, c, mat[3][3], valor, sel = 0;

  printf("\nDigite os valores para a matriz: \n");

  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      printf("[%d] [%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
  }

  printf("\nDigite um valor: ");
  scanf("%d", &valor);

  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      if(mat[l][c] == valor)
        sel++;
    }
  }

  if(sel > 0)
    printf("\nValor encontrado!\n");
  else
    printf("\nAviso: Valor nao econtrado!\n");

}
