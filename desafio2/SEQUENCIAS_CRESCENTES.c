#include <stdio.h>
#include <math.h>

int main() {
  int input;
  printf("Digite um numero: ");
  scanf("%i", &input);

  for (int i = 0; i <= input; i++) {
    printf(" %i", i);
  }

  return 0;
}