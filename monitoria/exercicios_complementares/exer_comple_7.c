#include <stdio.h>

void main() {

  float n1, n2, n3, media;

  printf("Digite a nota da primeira prova: ");
  scanf("%f", &n1);

  printf("Digite a nota da segunda prova: ");
  scanf("%f", &n2);

  printf("Digite a nota do trabalho: ");
  scanf("%f", &n3);

  media = (n1 + n2 + n3) / 3;

  printf("Media do aluno: %0.2f\n", media);

}
