#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int A[100];
  for (int i = 0; i <100; i++) {
    A[i] = rand()%100;
    if (A[i] <= 10) {
      printf("A[%i] = %i\n", i, A[i]);
    }
  }

  return 0;
}