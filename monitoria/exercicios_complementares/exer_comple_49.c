#include <stdio.h>

void main() {

  int l, c, pares = 0, impares = 0, mat[4][4];

  printf("\nDigite os valores para a matriz: \n");
  for(l = 0; l < 4; l++) {
    for(c = 0; c < 4; c++) {
      printf("[%d] [%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
  }

  for(l = 0; l < 4; l++) {
    for(c = 0; c < 4; c++) {
      if((mat[l][c] % 2) == 0 && mat[l][c] != 0)
        pares++;
      else
        impares++;
    }
  }

  printf("\nForam digitados %d numeros pares e %d numeros impares na matriz.\n\n", pares, impares);

}
