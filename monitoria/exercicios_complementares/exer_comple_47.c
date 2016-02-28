#include <stdio.h>

void main() {

  int l, c, mat[5][5], soma = 0, cont = 2;

  printf("\nDigite os valores para a matriz: \n");
  for(l = 0; l < 5; l++) {
    for(c = 0; c < 5; c++) {
      mat[l][c] = cont;
      cont += 2;
    }
  }

  puts("\nMatriz Resultante: \n");
  for(l = 0; l < 5; l++) {
    for(c = 0; c < 5; c++) {
      printf("%d\t", mat[l][c]);
    }
    printf("\n");
  }
  puts("\n");

}
