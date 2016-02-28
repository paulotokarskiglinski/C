#include <stdio.h>

void main() {

    int l, c, valor, achou = 0;
    int mat[2][2];
    int mat2[2][2] = { {6, 6}, {6, 6} }; //valor pre definido
    int vet[2] = {6, 6};

    for(l = 0; l < 2; l++) {
        for(c = 0; c < 2; c++) {
            if(mat2[l][c] == 6) {
                printf("Valor encontrado! matriz[%d][%d] = %d\n", l, c, mat2[l][c]);
                achou++;
            }
        }
    }


    if(achou == 0)
        printf("Nao achou o valor\n");
    else
        printf("O numero foi encontrado %d vezes\n", achou);

}
