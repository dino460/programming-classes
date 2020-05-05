#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

int higher(int a[]) {
  int max_value;
  max_value = 0;
  for (int i = 0; i < SIZE; i++) {
    if (a[i] > max_value) {
      max_value = a[i];
    }
  }
  return(max_value);
}

int main() {
  srand(time(NULL));
  int vect[SIZE], result;
  for (int i = 0; i < SIZE; i++) {
    vect[i] = rand()%100;
    printf("%i\n", vect[i]);
  }
  result = higher(vect);
  printf("\nThe highest vector value is: %i", result);
  return 0;
}
