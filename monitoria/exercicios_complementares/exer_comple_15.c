#include <stdio.h>

void main() {

  int p1, p2, p3, op;
  float n1, n2, n3, media;

  printf("Escolha um tipo de media: \n1 - Media Aritimedica\n2 - Media Ponderada\nEscolha: ");
  scanf("%d", &op);

  switch(op) {
    case 1: {
      printf("Digite a nota da primeira prova: ");
      scanf("%f", &n1);

      printf("Digite a nota da segunda prova: ");
      scanf("%f", &n2);

      printf("Digite a nota do trabalho: ");
      scanf("%f", &n3);

      media = (n1 + n2 + n3) / 3;

      printf("\nMedia aritimedica do aluno: %0.2f\n", media);

      break;
    }
    case 2: {
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

      media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

      printf("\nMedia ponderada do aluno: %0.2f\n", media);

      break;
    }
  }

}
