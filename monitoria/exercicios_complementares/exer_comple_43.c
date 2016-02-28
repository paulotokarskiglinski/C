#include <stdio.h>

void main() {

  int cont = 0, l, c, mat[2][2];

  printf("\nDigite os valores para a matriz: \n");
  for(l = 0; l < 2; l++) {
    for(c = 0; c < 2; c++) {
      printf("Matriz [%d] [%d]: ", l, c);
      scanf("%d", &mat[l][c]);
    }
  }

  for(l = 0; l < 2; l++) {
    for(c = 0; c < 2; c++) {
      if((mat[l][c] % 2) == 0 && mat[l][c] != 0)
        cont++;
    }
  }

  printf("\nForam encontrados %d numeros pares na matriz.\n\n", cont);

}
