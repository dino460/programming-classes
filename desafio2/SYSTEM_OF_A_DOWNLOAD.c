#include <stdio.h>

int main() {
  int x, y, c;
  printf("Digite um numero entre 0 e 5: ");
  scanf("%i", &x);
  printf("Digite outro numero entre 0 e 5: ");
  scanf("%i", &y);

  while (x >= 6 || y >= 6 || x < 0 || y < 0) {
    printf("\nDigite apenas numeros entre 0 e 5: ");
    scanf("%i", &x);
    scanf("%i", &y);
  }

  c = x + y;
  switch (c) {
    case 0:
      printf("PROXYCITY");
      break;

    case 1:
      printf("P.Y.N.G.");
      break;

    case 2:
      printf("DNSUEY!");
      break;

    case 3:
      printf("SERVERS");
      break;

    case 4:
      printf("HOST!");
      break;

    case 5:
      printf("CRIPTONIZE");
      break;

    case 6:
      printf("OFFLINE DAY");
      break;

    case 7:
      printf("SALT");
      break;

    case 8:
      printf("ANSWER!");
      break;

    case 9:
      printf("RAR?");
      break;

    case 10:
      printf("WIFI ANTENNAS");
      break;
  }

  return 0;
}