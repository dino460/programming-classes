#include <stdio.h>


int main() {
  int input, square, temporary;
  printf("Typa a number: ");
  scanf("%i", &input);
  for (square = 1; square <= input; square++)
  {
    if (square % 2 == 0)
    {
      temporary = square * square; 
      printf("\n %i", square);
      printf("^2 = ");
      printf("%i \n", temporary);
    }
  }

  return 0;
}