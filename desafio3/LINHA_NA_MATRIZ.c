#include <stdio.h>

int main() {
  int L, M[12][12];
  char  T;
  float result;
  result = 0;

  scanf("%i", &L);
  scanf(" %c", &T);
  for (int i = 0; i < 12; i++){
    for (int j = 0; j < 12; j++) {
      M[i][j] = i + j; // O arquivo pdf não continha os valores da matriz, então criei um padrão simples que fosse fácil para verificação
    }
  }

  if (T == 'S' || T == 's') {
    for (int j = 0; j < 12; j++) {
      result += M[L][j];
    }
    printf("%f", result);
  } else if (T == 'M' || T == 'm') {
    for (int j = 0; j < 12; j++) {
      result += (M[L][j] / 12);
    }
    printf("%.1f", result);
  }
  
  return 0;
}