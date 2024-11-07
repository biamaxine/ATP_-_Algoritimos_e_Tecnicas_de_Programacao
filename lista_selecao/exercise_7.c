#include <stdio.h>

int main() {
  int year;

  printf("Digite um ano: ");
  scanf("%d", &year);

  if (year % 4 == 0 && (year % 100 != 0) || (year % 400 == 0)) {
    printf("O ano %d é bissexto.\n", year);
  } else {
    printf("O ano %d não é bissexto.\n", year);
  }

  return 0;
}
