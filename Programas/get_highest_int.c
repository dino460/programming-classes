#include <stdio.h>



int higher(int a, int b) {
  int res;
  if (a > b) {
    res = a;
    return(res);
  }
  if (b > a) {
    res = b;
    return(res);
  }
  if (b == a) {
    res = b;
    return(res);
  }
}

int main() {
  int x, y, result;
  scanf("%i", &x);
  scanf("%i", &y);
  result = higher(x, y);
  printf("%i", result);

  return 0;
}