#include <stdio.h>

int main() {
  float salary,
        ir_discount = 0,
        inss_discount = 0,
        health_plan_discount = 150.00;

  printf("Informe o salário: ");
  scanf("%f", &salary);

  if (salary <= 2259.20) ir_discount = 0;
  else if (salary <= 2828.65) ir_discount = salary * 0.075;
  else if (salary <= 3751.05) ir_discount = salary * 0.15;
  else if (salary <= 4664.68) ir_discount = salary * 0.225;
  else ir_discount = salary * 0.275;

  if (salary <= 1412.00) inss_discount = salary * 0.075;
  else if (salary <= 2666.68) inss_discount = salary * 0.09;
  else if (salary <= 4000.03) inss_discount = salary * 0.12;
  else inss_discount = salary * 0.14;

  float total_discount = ir_discount + inss_discount + health_plan_discount;
  float net_salary = salary - total_discount;

  printf("Desconto IR: R$ %.2f\n", ir_discount);
  printf("Desconto INSS: R$ %.2f\n", inss_discount);
  printf("Desconto Plano de Saúde: R$ %.2f\n", health_plan_discount);
  printf("Desconto Total: R$ %.2f\n", total_discount);
  printf("Salário Líquido: R$ %.2f\n", net_salary);

  return 0;
}
