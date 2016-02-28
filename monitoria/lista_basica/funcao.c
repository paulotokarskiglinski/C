#include <stdio.h>

//Retorna um valor
int soma_tipo1(int a1, int b1) {
    return (a1 + b1);
}

//Apenas imprime o resultado
void soma_tipo2(int valor1, int valor2) {
    int r1;
    r1 = valor1 + valor2;

    printf("\nR2: %d\n", r1);
}

void main() {
    int r, a1, b1;

    scanf("%d", &a1);
    scanf("%d", &b1);

    r = soma_tipo1(a1, b1);
    soma_tipo2(a1, b1);

    printf("\nR1: %d\n", r);
    printf("\nR3: %d\n", soma_tipo3(a1, b1));
}

//Funcao no final do programa
int soma_tipo3(int a1, int b1) {
    return (a1 + b1);
}
