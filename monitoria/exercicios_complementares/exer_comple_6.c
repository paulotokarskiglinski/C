#include <stdio.h>

void main() {

  float valor, desconto, final;

  printf("Digite o valor do produto (R$): ");
  scanf("%f", &valor);

  printf("Digite o valor do desconto (%%): ");
  scanf("%f", &desconto);

  final = valor - (valor * (desconto / 100));

  printf("Valor final do produto: R$%0.2f \n", final);

}
