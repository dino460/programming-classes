#include <stdio.h>
#define PASSWORD 2002

int main() {
  int input;
  printf("Digite uma senha: ");
  scanf("%i", &input);

  while (input != PASSWORD) {
    printf("Senha invalida \n");
    printf("Digite uma senha: ");
    scanf("%i", &input);
  }
  printf("Acesso permitido");

  return 0;
}