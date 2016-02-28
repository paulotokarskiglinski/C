#include <stdio.h>

void main() {

  int l, c, mat[3][3], soma = 0;

  printf("\nDigite os valores para a matriz: \n");

  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      printf("[%d] [%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
  }

  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      if(l == c)
        soma += mat[l][c];
    }
  }

  printf("\nSoma da diagonal principal da matriz = %d\n\n", soma);

}
