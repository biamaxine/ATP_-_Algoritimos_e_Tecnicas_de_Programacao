#include <stdio.h>

int main() {
  int numero, i, primo = 1;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if (numero <= 1) {
    primo = 0;
  } else {
    for (i = 2; i * i <= numero || primo == 0; i++) {
      if (numero % i == 0) primo = 0;
    }

    // i = 2;
    // while (i * i <= numero || primo == 0)
    // {
    //   if (numero % i == 0) primo = 0;
    //   i++;
    // }
  }

  if (primo) {
    printf("O numero eh primo.\n");
  } else {
    printf("O numero nao eh primo.\n");
  }

  return 0;
}
