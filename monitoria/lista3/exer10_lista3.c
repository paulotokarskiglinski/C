#include <stdio.h>

void main() {

    int rs, valor;

    struct Hm {
        int horas;
        int minutos;
    };

    struct Hm hm;

    printf("Digite o tempo em minutos: ");
    scanf("%d", &valor);

    //Calculo da conversao
    rs = (valor % 60);
    valor -= rs;
    valor /= 60;
    //Atribuo os valores para o struct Hm
    hm.horas = valor;
    hm.minutos = rs;

    printf("Conversao %d : %d\n", hm.horas, hm.minutos);
}
