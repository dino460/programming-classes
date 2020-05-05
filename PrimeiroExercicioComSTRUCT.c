#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10



struct aluno{
  int id;
  int nota;
}aluno[SIZE];

struct nNotasTotal{
  int nNotasNaPosicao;
}nNotasTotal[SIZE];

int main () {
  srand(time(NULL));
  for(int i = 0; i < SIZE; i++)
  {
    aluno[i].id = i;
    printf("id: %i\n", aluno[i].id);
    aluno[i].nota = rand()%11;
    printf("nota: %i\n\n", aluno[i].nota);
  }

  int maxNota = 0;

  for(int i = 0; i < SIZE; i++)
  {
    if(aluno[i].nota > maxNota)
    {
      maxNota = aluno[i].nota;
    }
  }

  printf("Nota m�xima: %i\n", maxNota);

  for(int i = 0; i < SIZE; i++)
  {
    for(int j = 0; j < SIZE; j++)
    {
      if(aluno[i].nota == j+1)
      {//Aqui as posi��es de cada nota s�o 1 a menos que o valor da nota
      //Ex.: nota 1 -> posi��o 0
        nNotasTotal[j].nNotasNaPosicao += 1;
      }
    }
  }
  for(int i = 0; i < SIZE; i++)
  {
    int notas = i + 1;
    printf("Total de notas %i: %i\n", notas, nNotasTotal[i].nNotasNaPosicao);
  }
  
}