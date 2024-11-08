#include <stdio.h>

int main() {
  int option;
  float value, result;

  printf("Escolha a unidade de origem:\n");
  printf("1 - Temperatura (Celsius para Fahrenheit)\n");
  printf("2 - Temperatura (Fahrenheit para Celsius)\n");
  printf("3 - Comprimento (metros para quilômetros)\n");
  printf("4 - Comprimento (quilômetros para metros)\n");
  printf("Escolha uma opção: ");
  scanf("%d", &option);

  switch (option) {
    case 1:
      printf("Digite a temperatura em Celsius: ");
      scanf("%f", &value);
      result = (value * 9.0 / 5.0) + 32.0;
      printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit.\n", value, result);
      break;

    case 2:
      printf("Digite a temperatura em Fahrenheit: ");
      scanf("%f", &value);
      result = (value - 32.0) * 5.0 / 9.0;
      printf("%.2f graus Fahrenheit é igual a %.2f graus Celsius.\n", value, result);
      break;

    case 3:
      printf("Digite o comprimento em metros: ");
      scanf("%f", &value);
      result = value / 1000.0;
      printf("%.2f metros é igual a %.2f quilômetros.\n", value, result);
      break;

    case 4:
      printf("Digite o comprimento em quilômetros: ");
      scanf("%f", &value);
      result = value * 1000.0;
      printf("%.2f quilômetros é igual a %.2f metros.\n", value, result);
      break;

    default:
      printf("Opção inválida.\n");
  }

  return 0;
}
