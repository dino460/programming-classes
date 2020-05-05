#include <stdio.h>
#include <stdlib.h>
#define NROWS 3
#define NCOLUMNS 4

int main() {

  int **matrix = (int**)malloc(NROWS * sizeof(int*));
  for(int i = 0; i < NROWS; i++)
    matrix[i] = (int*)malloc(NCOLUMNS * sizeof(int*));

  int count = 0;
  for(int i = 0; i < NROWS; i++)
    for(int j = 0; j < NCOLUMNS; j++)
      matrix[i][j] = ++count;

  for(int i = 0; i < NROWS; i++)
    for(int j = 0; j < NCOLUMNS; j++)
      printf("%i ", matrix[i][j]);

  for(int i = 0; i < NROWS; i++) free(matrix[i]);

  free(matrix);
  
  return 0;
}