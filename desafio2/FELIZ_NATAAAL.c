#include <stdio.h>

int main() {
  int input;
  printf("Qual o seu nivel de felicidade? ");
  scanf("%i", &input);

  printf("Feliz nat");
  for (int i = 0; i < input; i++) {
    printf("a");
  }
  printf("l!");

  return 0;
}