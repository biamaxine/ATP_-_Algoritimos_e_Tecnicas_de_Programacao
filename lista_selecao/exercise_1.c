#include <stdio.h>

int main()
{
  int value, n_100, n_50, n_20, n_10;

  printf("Quanto deseja sacar?\n");
  scanf("%d", &value);

  n_100 = value / 100;
  value -= n_100 * 100;
  n_50 = value / 50;
  value -= n_50 * 50;
  n_20 = value / 20;
  value -= n_20 * 20;
  n_10 = value / 10;

  printf("Notas de R$100: %d", n_100);
  printf("Notas de R$50: %d", n_50);
  printf("Notas de R$20: %d", n_20);
  printf("Notas de R$10: %d", n_10);

  return 0;
}