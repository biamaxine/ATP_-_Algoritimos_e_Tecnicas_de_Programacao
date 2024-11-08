#include <stdio.h>

#define MOVIE_1 "Luca"
#define CLASSIFICATION_1 0
#define MOVIE_2 "Nimona"
#define CLASSIFICATION_2 10
#define MOVIE_3 "Batman: O Cavaleiro das Trevas"
#define CLASSIFICATION_3 12
#define MOVIE_4 "Jogos Vorazes"
#define CLASSIFICATION_4 14
#define MOVIE_5 "Django Livre"
#define CLASSIFICATION_5 16
#define MOVIE_6 "Kill Bill"
#define CLASSIFICATION_6 18

int main()
{
  int age;

  printf("Insira sua idade: ");
  scanf("%d", &age);

  if (age >= CLASSIFICATION_1) printf("\n%s - Livre para todos os publicos\n", MOVIE_1);
  if (age >= CLASSIFICATION_2) printf("%s - Recomendado para maiores de %d\n", MOVIE_2, CLASSIFICATION_2);
  if (age >= CLASSIFICATION_3) printf("%s - Recomendado para maiores de %d\n", MOVIE_3, CLASSIFICATION_3);
  if (age >= CLASSIFICATION_4) printf("%s - Recomendado para maiores de %d\n", MOVIE_4, CLASSIFICATION_4);
  if (age >= CLASSIFICATION_5) printf("%s - Recomendado para maiores de %d\n", MOVIE_5, CLASSIFICATION_5);
  if (age >= CLASSIFICATION_6) printf("%s - Recomendado para maiores de %d\n", MOVIE_6, CLASSIFICATION_6);

  return 0;
}