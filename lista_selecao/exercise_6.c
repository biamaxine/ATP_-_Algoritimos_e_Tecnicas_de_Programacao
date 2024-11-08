#include <stdio.h>

// int isPrime(int number, int divider)
// {
//   if (number <= 2) return number == 2 ? 1 : 0;
//   if (number % divider != 0) return 0;
//   if (divider * divider == number) return 1;
//   else return isPrime(number, divider++);
// }

int main() {
  int number, i, prime = 1;

  printf("Digite um number: ");
  scanf("%d", &number);

  if (number <= 1) {
    prime = 0;
  } else {
    // WHILE
    i = 2;
    while (i * i <= number || prime == 0)
    {
      if (number % i == 0) prime = 0;
      i++;
    }

    // // FOR
    // for (i = 2; i * i <= number || prime == 0; i++) {
    //   if (number % i == 0) prime = 0;
    // }

    // // RECURSIVE FUNCTION
    // prime = isPrime(number, 2);
  }

  if (prime) {
    printf("O numero eh primo.\n");
  } else {
    printf("O numero nao eh primo.\n");
  }

  return 0;
}
