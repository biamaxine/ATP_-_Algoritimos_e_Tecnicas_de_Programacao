#include <stdio.h>

int main() {
  float total_value, discount, final_value;

  printf("Digite o valor total da compra: ");
  scanf("%f", &total_value);

  if (total_value > 300) {
    discount = 0.20;
  } else if (total_value > 200) {
    discount = 0.15;
  } else if (total_value > 100) {
    discount = 0.10;
  } else {
    discount = 0.00;
  }

  final_value = total_value - (total_value * discount);

  printf("Valor total: R$ %.2f\n", total_value);
  printf("Desconto aplicado: %.0f%%\n", discount * 100);
  printf("Valor final com desconto: R$ %.2f\n", final_value);

  return 0;
}
