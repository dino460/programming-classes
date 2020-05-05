#include <stdio.h>


int main() {
  int input1, input2;
  printf("Type a number: ");
  scanf("%i", &input1);
  printf("Type another number: ");
  scanf("%i", &input2);

  if (input1 > input2) {
    printf("Decrescente.");
  } else if (input2 > input1) {
    printf("Crescente.");
  } else {
    printf("");
  }

  return 0;
}