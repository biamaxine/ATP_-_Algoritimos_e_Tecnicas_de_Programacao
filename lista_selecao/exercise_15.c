#include <stdio.h>

int main() {
  float weight, height, imc;

  printf("Digite o peso (kg): ");
  scanf("%f", &weight);
  printf("Digite a altura (m): ");
  scanf("%f", &height);

  imc = weight / (height * height);

  if (imc < 18.5) {
    printf("Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 25) {
    printf("Peso normal\n");
  } else if (imc >= 25 && imc < 30) {
    printf("Acima do peso\n");
  } else {
    printf("Obeso\n");
  }

  return 0;
}
