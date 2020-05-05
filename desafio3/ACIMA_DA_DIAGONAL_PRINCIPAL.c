#include <stdio.h>

int main() {
  int x, y, M[12][12];
  char  O;
  float result = 0;

  scanf(" %c", &O);

  for (int i = 0; i < 12; i++){
    for (int j = 0; j < 12; j++) {
      M[i][j] = i + j; // O arquivo pdf não continha os valores da matriz, então criei um padrão simples que fosse fácil para verificação
    }
  }

  for (x = 0; x < 12; x++) {
    for (y = x + 1; y < 12; y++) {
      result += M[x][y];
     }
  }

  if (O == 'S' || O == 's') {
    printf("%.1f", result);

  } else if (O == 'M' || O == 'm') {
    printf("%.1f", (result/66));
  }
  
  return 0;
}