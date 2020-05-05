#include <stdio.h>
#include <math.h>

int main(void) {
  int N, M, temp, i, j;
  printf("Digite N: ");
  scanf("%i", &N);
  for (temp = 0; temp<N; temp++){ //se der errado, declarar"temp" fora
    printf("Digite M: ");
    scanf("%i", &M);
    int matriz[M][M];
    for (i = 0; i < M; i++) {
      for (j= 0; j<M; j++) {
        int value;
        scanf("%i", &value);
        matriz[i][j] = pow(value, 2);
      }
    }
    printf("Quadrado da matriz #%i:\n", temp+3);
    for (i = 0; i < M; i++) {
      for (j= 0; j<M; j++) {
        printf(" %i ", matriz[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}