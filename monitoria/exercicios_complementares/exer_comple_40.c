#include <stdio.h>

void main() {

  int l, c, soma = 0, mat[2][3];

  printf("\nDigite os valores da matriz: \n");
  for(l = 0; l < 2; l++) {
    for(c = 0; c < 3; c++) {
      printf("[%d] [%d]: ", l, c);
      scanf("%d", &mat[l][c]);
      soma += mat[l][c];
    }
  }
  printf("\nResultado da soma = %d\n\n", soma);
}
