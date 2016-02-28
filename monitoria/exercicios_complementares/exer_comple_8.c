#include <stdio.h>

void main() {

  int p1, p2, p3, p4;
  float n1, n2, n3, n4, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("Digite o peso da primeira nota: ");
  scanf("%d", &p1);

  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  printf("Digite o peso da segunda nota: ");
  scanf("%d", &p2);

  printf("Digite a terceira nota: ");
  scanf("%f", &n3);
  printf("Digite o peso da terceira nota: ");
  scanf("%d", &p3);

  printf("Digite a quarta nota: ");
  scanf("%f", &n4);
  printf("Digite o peso da quarta nota: ");
  scanf("%d", &p4);

  media = ((n1 * p1) + (n2 * p2) + (n3 * p3) + (n4 * p4)) / (p1 + p2 + p3 + p4);

  printf("Media do aluno: %0.2f\n", media);

}
