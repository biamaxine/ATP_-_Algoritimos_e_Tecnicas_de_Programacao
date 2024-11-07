#include <stdio.h>

int main()
{
  float h1, h2, h3;

  printf("Insira a altura das 3 árvores:\n");
  scanf("%f %f %f", h1, h2, h3);

  float bigger_tree;
  float smaller_tree;

  if (h1 > h2 && h1 > h3) {
    bigger_tree = h1;
    if (h2 < h3) smaller_tree = h2;
    else smaller_tree = h3;
  }
  else if (h2 > h1 && h2 > h3) {
    bigger_tree = h2;
    if (h1 < h3) smaller_tree = h1;
    else smaller_tree = h3;
  }
  else {
    bigger_tree = h3;
    if (h1 < h2) smaller_tree = h1;
    else smaller_tree = h2;
  }

  printf("A maior arvore tem %2.f metros");
  printf("A menor arvore tem %2.f metros");

  return 0;
}