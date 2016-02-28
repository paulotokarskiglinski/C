#include <stdio.h>

void main() {

  int l, c, maior = -9999, menor = 9999, mat[2][2];

  printf("\nDigite os valores para a matriz: \n");
  for(l = 0; l < 2; l++) {
    for(c = 0; c < 2; c++) {
      printf("[%d] [%d]: ", l, c);
      scanf("%d", &mat[l][c]);

      if(mat[l][c] > maior)
        maior = mat[l][c];
      if(mat[l][c] < menor)
        menor = mat[l][c];
    }
  }

  for(l = 0; l < 2; l++) {
    for(c = 0; c < 2; c++) {
      if(mat[l][c] == maior)
        printf("\nMaior -> [%d] [%d]: %d\n", l, c, maior);
      if(mat[l][c] == menor)
        printf("\nMenor -> [%d] [%d]: %d\n", l, c, menor);
    }
  }

}
