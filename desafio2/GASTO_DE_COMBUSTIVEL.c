#include <stdio.h>
#define CONSUME 12


int main() {
  float time, speed, distance, litres;
  printf(" Trip time (h): ");
  scanf("%f", &time);
  printf("\n Trip speed (Km/h): ");
  scanf("%f", &speed);

  distance = speed * time;
  litres = distance / CONSUME;

  printf("\n You will need %.2f", litres);
  printf(" litres.");

  return 0;
}