#include <stdio.h>

void main() {

  int l, c, mat[3][3];

  printf("\nDigite os valores para a matriz: \n");

  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      printf("[%d] [%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
  }
  puts("\nMatriz: ");
  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      printf("%d\t", mat[l][c]);
    }
    printf("\n");
  }
  puts("\n");
}
