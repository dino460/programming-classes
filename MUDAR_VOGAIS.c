#include <stdio.h>
#include <string.h>


void mudarVogais(char frase[])
{
  for(int i = 0; i < 100; i++)
  {
    char ch;
    ch = frase[i];

    if(ch >= 'A' && ch <= 'Z')
    {
      continue;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
      switch(ch)
      {
        case 'a':
          frase[i] = 'u';
          break;

        case 'e':
          frase[i] = 'o';
          break;

        case 'i':
          frase[i] = 'u';
          break;

        case 'o':
          frase[i] = 'a';
          break;

        case 'u':
          frase[i] = 'e';
          break;
      }
    }
  }
}


int main(void)
{
  char frase[100];
  fgets(frase, 100, stdin);

  mudarVogais(frase);
  printf("%s", frase);
  
  return 0;
}