#include <stdio.h>

void main() {

  float altura, peso, imc;

  printf("Digite sua altura (m): ");
  scanf("%f", &altura);

  printf("Digite seu peso (kg): ");
  scanf("%f", &peso);

  imc = peso / (altura * altura);

  if(imc < 18.5)
    printf("\nVoce esta' abaixo do peso!\n");
  else if(imc >= 18.5 && imc <= 24.99)
    printf("\nVoce esta' com o peso normal!\n");
  else if(imc >= 25 && imc <= 29.99)
    printf("\nVoce esta' com exesso de peso!\n");
  else if(imc >= 30 && imc <= 34.99)
    printf("\nVoce esta' com Obesidade I!\n");
  else if(imc >= 35 && imc <= 39)
    printf("\nVoce esta' com Obesidade II!\n");
  else if(imc > 40)
    printf("\nVoce esta' com Obesidade III!\n");

}
