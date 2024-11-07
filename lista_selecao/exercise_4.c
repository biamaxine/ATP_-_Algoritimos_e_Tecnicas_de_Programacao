#include <stdio.h>

int main() {
  float morning_temp, afternoon_temp, night_temp;

  printf("Digite a temperatura da manha: ");
  scanf("%f", &morning_temp);

  printf("Digite a temperatura da tarde: ");
  scanf("%f", &afternoon_temp);

  printf("Digite a temperatura da noite: ");
  scanf("%f", &night_temp);

  float highest_temp, middle_temp, lowest_temp;

  if (morning_temp > afternoon_temp && morning_temp > night_temp) {
    highest_temp = morning_temp;
    if (afternoon_temp < night_temp) {
      middle_temp = afternoon_temp;
      lowest_temp = night_temp;
    } else {
      middle_temp = night_temp;
      lowest_temp = afternoon_temp;
    }
  }
  else if (afternoon_temp > morning_temp && afternoon_temp > night_temp) {
    highest_temp = afternoon_temp;
    if (morning_temp < night_temp) {
      middle_temp = morning_temp;
      lowest_temp = night_temp;
    } else {
      middle_temp = night_temp;
      lowest_temp = morning_temp;
    }
  }
  else {
    highest_temp = night_temp;
    if (morning_temp < afternoon_temp) {
      middle_temp = morning_temp;
      lowest_temp = afternoon_temp;
    } else {
      middle_temp = afternoon_temp;
      lowest_temp = morning_temp;
    }
  }

  printf("\nTemperaturas em ordem crescente: %.2f, %.2f, %.2f\n", lowest_temp, middle_temp, highest_temp);

  return 0;
}
