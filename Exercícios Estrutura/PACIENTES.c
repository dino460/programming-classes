#include <stdio.h>

struct paciente
{
  char name[100];
  float height;
  float weight;
  char sex[1];
  int id;
};

int main()
{
  int N;
  scanf("%i", &N);

  struct paciente pacientes[N];

  for(int i = 0; i < N; i++)
  {
    printf("\n");
    scanf("%[^\n]%*c", pacientes[i].name);
    scanf("%f", &pacientes[i].height);
    scanf("%f%*c", &pacientes[i].weight);
    scanf("%[^\n]%*c", pacientes[i].sex);
    scanf("%i%*c", &pacientes[i].id);
  }

  int getId;
  printf("\n");
  scanf("%i", &getId);

  while(getId != -1)
  {
    for(int i = 0; i < N; i++)
    {
      if(getId == pacientes[i].id)
      {
        printf("%s\n", pacientes[i].name);
        printf("%.2f\n", pacientes[i].height);
        printf("%.2f\n", pacientes[i].weight);
        printf("%s\n", pacientes[i].sex);
        printf("%i\n", pacientes[i].id);
      }
      else 
      {
      }
    }
    printf("\n");
    scanf("%i", &getId);
  }
  
  return 0;
}