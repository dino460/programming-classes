#include <stdio.h>
#include <math.h>

int main() {
  float x, y;
  float result;
  printf("Digite um numero: ");
  scanf("%f", &x);
  printf("Digite outro numero: ");
  scanf("%f", &y);

  if (y == 0) {
    printf("divisao impossivel");
  } else {
    result = x / y;
    printf("%.1f", round(result));
  }

  return 0;
}