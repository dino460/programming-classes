#include <stdio.h>
#include <math.h>

struct pointStruct
{
  int x;
  int y;
} ponto_A, ponto_B;


float distancia(struct pointStruct ponto_A, struct pointStruct ponto_B)
{
  float result;
  int temporary;

  result = sqrt(pow(ponto_B.x - ponto_A.x, 2) + pow(ponto_B.y - ponto_A.y, 2));
  
  return result;
}


int main()
{
  scanf("%i %i", &ponto_A.x, &ponto_A.y);
  scanf("%i %i", &ponto_B.x, &ponto_B.y);

  printf("%.2f", distancia(ponto_A, ponto_B));
  
  return 0;
}