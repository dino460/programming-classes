#include <stdio.h>

int main(void) {
  int N, P, Q, R, S, X, Y, result, I, J;
  
  scanf("%i\n", &N);
  scanf("%i %i %i %i %i %i\n", &P, &Q, &R, &S, &X, &Y);
  scanf("%i %i", &I, &J);

  int A[N][N];
  int B[N][N];
  int C[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      A[i][j] = ((P*i) + (Q*j))%(X);
      B[i][j] = ((R*i) + (S*j))%(Y);
    }
  }

  for (int i = 0; i < N; i++) {
    printf("\n");
    for (int j = 0; j < N; j++) {
      for (int x = 0; x < N; x++) {
        result += A[i][x] * B[x][j];
      }
      C[i][j] = result;
      result = 0;
      printf("%i ", C[i][j]);
    }
  }
  printf("\n%i", C[I][J]);
  
  return 0;
}