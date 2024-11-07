#include <stdio.h>
#include <string.h>

int main()
{
  float a, b;
  char operation[16];

  printf("Insira dois números:\n");
  scanf("%f %f", &a, &b);
  printf("Qual operação deseja realizar? ");
  scanf("%s", &operation);

  if (strcmp(operation, 'adicao')) printf("%f", a + b);
  else if (strcmp(operation, 'subtracao')) printf("%f", a - b);
  else if (strcmp(operation, 'multiplicacao')) printf("%f", a * b);
  else if (strcmp(operation, 'divisao')) printf("%f", a / b);
  else printf("Operacao invalida.");

  return 0;
}