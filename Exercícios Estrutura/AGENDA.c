#include <stdio.h>

struct clendario
{
  int dia;
  int mes;
  int ano;
  int hora;
  int min;
  int seg;
  char toDo[1000];
};

int main()
{
  int N;
  scanf("%i", &N);

  struct clendario notas[N];

  for(int i = 0; i < N; i++)
  {
    printf("\n");
    scanf("%i", &notas[i].dia);
    scanf("%i", &notas[i].mes);
    scanf("%i", &notas[i].ano);
    scanf("%i", &notas[i].hora);
    scanf("%i", &notas[i].min);
    scanf("%i%*c", &notas[i].seg);
    scanf("%[^\n]%*c", notas[i].toDo);
  }

  for(int i = 0; i < N; i++)
  {
    printf("\n");
    printf("%02i/%02i/%02i - %02i:%02i:%02i\n", notas[i].dia, notas[i].mes, notas[i].ano, notas[i].hora, notas[i].min, notas[i].seg);
    printf("%s", notas[i].toDo);
  }

  return 0;
}