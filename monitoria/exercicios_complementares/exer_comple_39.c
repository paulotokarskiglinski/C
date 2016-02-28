#include <stdio.h>

void main() {

  int l, c;
  int mata[3][3], matb[3][3], matc[3][3];

  printf("\nDigite os valores para a matriz A: \n");
  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      printf("Matriz A [%d] [%d]: ", l, c);
      scanf("%d", &mata[l][c]);
    }
  }

  printf("\nDigite os valores para a matriz B: \n");
  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      printf("Matriz B [%d] [%d]: ", l, c);
      scanf("%d", &matb[l][c]);
    }
  }

  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      matc[l][c] = mata[l][c] + matb[l][c];
    }
  }

  puts("\nMatriz Resultante: \n");
  for(l = 0; l < 3; l++) {
    for(c = 0; c < 3; c++) {
      printf("%d\t", matc[l][c]);
    }
    printf("\n");
  }
  puts("\n");
}
