#include <stdio.h>
#include <math.h>


struct minToHour
{
  int hours;
  int minutes;
}t_minToHour;

void minToH(int timeValue)
{
  int hourValue = floor(timeValue / 60);
  int minValue = timeValue - (60 * hourValue);
  t_minToHour.hours = hourValue;
  t_minToHour.minutes = minValue;
  printf("%i h %i m", t_minToHour.hours, t_minToHour.minutes);
}

void hToMin(float timeValue)
{
  int hourValue = floor(timeValue);
  int minValue = (timeValue - hourValue) * 60;
  t_minToHour.hours = hourValue;
  t_minToHour.minutes = minValue;
  printf("%i h %i m", t_minToHour.hours, t_minToHour.minutes);
}

void finalTime(float timeStart, float timeDuration)
{
  float totalTime = timeStart + (timeDuration / 60);
  int finalHour = floor(totalTime);
  int finalMinute = round((totalTime - finalHour) * 60);
  t_minToHour.hours = finalHour;
  t_minToHour.minutes = finalMinute;
  printf("%i h %i m", t_minToHour.hours, t_minToHour.minutes);
}

int main ()
{
  int input1;
  printf("Insira o tempo em minutos: ");
  scanf("%i", &input1);
  minToH(input1);

  float input2;
  printf("\nInsira o tempo em horas: ");
  scanf("%f", &input2);
  hToMin(input2);

  float input3, input4;
  printf("\nInsira o tempo inicial em horas: ");
  scanf("%f", &input3);
  printf("\nInsira a duração em minutos: ");
  scanf("%f", &input4);
  finalTime(input3, input4);
}