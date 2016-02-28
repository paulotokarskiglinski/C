#include <stdio.h>

void main() {

  float salario;

  printf("Digite o salario do funcionario (R$): ");
  scanf("%f", &salario);

  if(salario <= 1499.99)
    salario = salario + (salario * 0.15);
  else if(salario >= 1500 && salario <= 2199.99)
    salario = salario + (salario * 0.20);
  else if(salario >= 2200 && salario <= 5000)
    salario = salario + (salario * 0.23);
  else
    printf("\nSalario invalido!");

  printf("\nO novo salario do funcionario e': R$%0.2f\n", salario);
}
