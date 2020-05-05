#include <stdio.h>


int main() {
  int input;
  printf("Type a number: ");
  scanf("%i", &input);

  if (input == 0) {
    printf("NULL");
  } else if (input % 2 == 0) {

    if (input > 0) {
      printf("EVEN POSITIVE");

    } else if (input < 0) {
      printf("EVEN NEGATIVE");
    }
    
  } else {
    if (input > 0) {
      printf("ODD POSITIVE");
    } else if (input < 0){
      printf("ODD NEGATIVE");
    }
  }

  return 0;