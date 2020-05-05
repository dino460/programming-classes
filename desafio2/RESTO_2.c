#include <stdio.h>


int main() {
  int input;
  printf("Type a number: ");
  scanf("%i", &input);
  for (int i = 1; i <= 10000; i++) {
    if (i % input == 2) {
      printf("\n %i", i);
    }
  }

  return 0;
}