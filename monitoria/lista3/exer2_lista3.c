#include <stdio.h>

int main() {

    int cont, c, l;
    int mata[3][3], matb[3][3], matc[3][3];

    //Matriz A
    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("Matriz A - posicao [%d][%d]: ", l, c);
            scanf("%d", &mata[l][c]);
        }
    }
    puts("\n");
    //Matriz B
    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("Matriz B - posicao [%d][%d]: ", l, c);
            scanf("%d", &matb[l][c]);
        }
    }

    //Somar as matrizes A e B
    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            matc[l][c] = mata[l][c] + matb[l][c];
        }
    }

    //Imprimir a matriz c
    printf("\nMatriz C: \n");
    for(l = 0; l < 3; l++) {
        for(c = 0; c < 3; c++) {
            printf("%d\t", matc[l][c]);
        }
        puts("\n");
    }

    return 0;
}
