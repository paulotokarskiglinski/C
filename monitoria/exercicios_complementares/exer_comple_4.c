#include <stdio.h>

void main() {

  float dist, comb, rs;

  printf("Digite a distancia percorrida em Km: ");
  scanf("%f", &dist);

  printf("Digite a quantidade gasta de combustivel em Litros: ");
  scanf("%f", &comb);

  rs = dist/comb;

  printf("Media: %f\n", rs);

}
