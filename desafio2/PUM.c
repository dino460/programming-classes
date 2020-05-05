#include <stdio.h>

int main(void) {
  int input;
  printf("Type a number: ");
  scanf("%i", &input);

  for (int i = 1; i <= input * 4; i++) {
    if (i % 4 == 0) {
      printf(" PUM\n");
    } else {
      printf(" %i", i);
    }
  }

  return 0;
}