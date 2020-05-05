#include <stdio.h>
#include <math.h>

int main(void) {
  int N;

  while (1) {
    scanf("%i\n", &N);
    printf("\n");

    if (N == 0) {
      break;
    }

    int M[N][N];

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        M[i][j] = pow(2, (i+j));
        printf(" %i ", M[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}