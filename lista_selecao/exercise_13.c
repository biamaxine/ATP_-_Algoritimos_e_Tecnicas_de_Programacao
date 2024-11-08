#include <stdio.h>

int main() {
  float pollution_index;

  scanf("%f", &pollution_index);

  if (pollution_index >= 0.3 && pollution_index < 0.4) {
    printf("As industrias do 1º grupo devem ser intimadas a suspender suas atividades.\n");
  } else if (pollution_index >= 0.4 && pollution_index < 0.5) {
    printf("As industrias do 1º e 2º grupo devem ser intimadas a suspender suas atividades.\n");
  } else if (pollution_index >= 0.5) {
    printf("As industrias dos 3 grupos devem ser intimadas a suspender suas atividades.\n");
  }

  return 0;
}