#include <stdio.h>

int main() {
  int valor1, valor2;

  printf("Digite dois valores: ");
  scanf("%d %d", &valor1, &valor2);

  if (valor1 % valor2 == 0 || valor2 % valor1 == 0) printf("São múltiplos\n");
  else printf("Não são múltiplos\n");

  return 0;
}
