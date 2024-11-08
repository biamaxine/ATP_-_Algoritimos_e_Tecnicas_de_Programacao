#include <stdio.h>
#include <string.h>

int main() {
  char country_1[50], country_2[50], country_3[50];
  int gold_1, gold_2, gold_3, silver_1, silver_2, silver_3, bronze_1, bronze_2, bronze_3;
  int total_point_1, total_point_2, total_point_3;

  printf("Nome do Pais: ");
  scanf("%s", country_1);
  printf("Medalhas de Ouro: ");
  scanf("%d", &gold_1);
  printf("Medalhas de Prata: ");
  scanf("%d", &silver_1);
  printf("Medalhas de Bronze: ");
  scanf("%d", &bronze_1);
  total_point_1 = gold_1 * 3 + silver_1 * 2 + bronze_1;

  printf("Nome do Pais: ");
  scanf("%s", country_2);
  printf("Medalhas de Ouro: ");
  scanf("%d", &gold_2);
  printf("Medalhas de Prata: ");
  scanf("%d", &silver_2);
  printf("Medalhas de Bronze: ");
  scanf("%d", &bronze_2);
  total_point_2 = gold_2 * 3 + silver_2 * 2 + bronze_2;

  printf("Nome do Pais: ");
  scanf("%s", country_3);
  printf("Medalhas de Ouro: ");
  scanf("%d", &gold_3);
  printf("Medalhas de Prata: ");
  scanf("%d", &silver_3);
  printf("Medalhas de Bronze: ");
  scanf("%d", &bronze_3);
  total_point_3 = gold_3 * 3 + silver_3 * 2 + bronze_3;

  if (total_point_1 >= total_point_2 && total_point_1 >= total_point_3) {
    printf("1. %s - %d pontos (%d/%d/%d)\n", country_1, total_point_1, gold_1, silver_1, bronze_1);

    if (total_point_2 >= total_point_3) {
      printf("2. %s - %d pontos (%d/%d/%d)\n", country_2, total_point_2, gold_2, silver_2, bronze_2);
      printf("3. %s - %d pontos (%d/%d/%d)\n", country_3, total_point_3, gold_3, silver_3, bronze_3);
    }
    else {
      printf("2. %s - %d pontos (%d/%d/%d)\n", country_3, total_point_3, gold_3, silver_3, bronze_3);
      printf("3. %s - %d pontos (%d/%d/%d)\n", country_2, total_point_2, gold_2, silver_2, bronze_2);
    }
  }
  else if (total_point_2 >= total_point_1 && total_point_2 >= total_point_3) {
    printf("1. %s - %d pontos (%d/%d/%d)\n", country_2, total_point_2, gold_2, silver_2, bronze_2);

    if (total_point_1 > total_point_3) {
      printf("2. %s - %d pontos (%d/%d/%d)\n", country_1, total_point_1, gold_1, silver_1, bronze_1);
      printf("3. %s - %d pontos (%d/%d/%d)\n", country_3, total_point_3, gold_3, silver_3, bronze_3);
    }
    else {
      printf("2. %s - %d pontos (%d/%d/%d)\n", country_3, total_point_3, gold_3, silver_3, bronze_3);
      printf("3. %s - %d pontos (%d/%d/%d)\n", country_1, total_point_1, gold_1, silver_1, bronze_1);
    }
  }
  else {
    printf("1. %s - %d pontos (%d/%d/%d)\n", country_3, total_point_3, gold_3, silver_3, bronze_3);

    if (total_point_1 > total_point_2) {
      printf("2. %s - %d pontos (%d/%d/%d)\n", country_1, total_point_1, gold_1, silver_1, bronze_1);
      printf("3. %s - %d pontos (%d/%d/%d)\n", country_2, total_point_2, gold_2, silver_2, bronze_2);
    }
    else {
      printf("2. %s - %d pontos (%d/%d/%d)\n", country_2, total_point_2, gold_2, silver_2, bronze_2);
      printf("3. %s - %d pontos (%d/%d/%d)\n", country_1, total_point_1, gold_1, silver_1, bronze_1);
    }
  }

  return 0;
}

// typedef struct {
//   char name[48];
//   int gold;
//   int silver;
//   int bronze;
//   int total_points;
// } Country;

// void set_country(Country* country) {
//   printf("Nome do País: ");
//   scanf("%47[^\n]%*c", country -> name);
//   printf("Medalhas de Ouro: ");
//   scanf("%d", &country -> gold);
//   printf("Medalhas de Prata: ");
//   scanf("%d", &country -> silver);
//   printf("Medalhas de Bronze: ");
//   scanf("%d", &country -> bronze);

//   getchar();

//  country -> total_points =
//    country -> gold * 3 + country -> silver * 2 + country -> bronze;
// }

// void sort_countries(Country* countries, int size) {
//   for (int i = 0; i < size - 1; i++)
//     for (int j = i + 1; j < size; j++)
//       if (countries[i].total_points < countries[j].total_points) {
//         Country temp = countries[i];
//         countries[i] = countries[j];
//         countries[j] = temp;
//       }
// }

// void print_rank(Country *countries) {
//   for (int i = 0; i < 3; i++)
//     printf(
//       "%d. %s - %d pontos (%d/%d/%d)\n",
//       i + 1,
//       countries[i].name,
//       countries[i].total_points,
//       countries[i].gold,
//       countries[i].silver,
//       countries[i].bronze
//     );
// }

// int advanced_main() {
//   Country countries[3];

//   for (int i = 0; i < 3; i++) set_country(&countries[i]);

//   sort_countries(countries, 3);
//   print_rank(countries);

//   return 0;
// }