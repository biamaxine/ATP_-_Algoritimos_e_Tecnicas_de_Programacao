#include <stdio.h>

int main() {
  char name[128];
  int age;
  float monthly_fee;

  printf("Digite o nome: ");
  scanf("%127[^\n]%*c", name);
  printf("Digite a idade: ");
  scanf("%d", &age);

  if (age <= 10) monthly_fee = 50.00;
  else if (age <= 29) monthly_fee = 300.00;
  else if (age <= 45) monthly_fee = 500.00;
  else if (age <= 59) monthly_fee = 1250.00;
  else if (age <= 65) monthly_fee = 1550.00;
  else monthly_fee = 2040.00;

  printf("Nome: %s\n", name);
  printf("Idade: %d\n", age);
  printf("Valor da mensalidade: R$ %.2f\n", monthly_fee);

  return 0;
}
