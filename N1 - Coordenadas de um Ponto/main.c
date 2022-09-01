#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  float numx, numy;
  printf("\nDigite a coordenada x (use apenas 1 casa decimal). ");
  scanf("%f", &numx);
  printf("\nDigite a coordenada y (use apenas 1 casa decimal). ");
  scanf("%f", &numy);
  if (numx == 0)
  {
    if (numy == 0)
    {
      printf("\nOrigem");
    } else {
      printf("\nEixo X");
    }
  } else {
    if (numy == 0)
    {
      printf("\nEixo Y");
    } else {
      if (numx > 0)
      {
        if (numy > 0)
        {
          printf("\nQ1");
        } else {
          printf("\nQ4");
        }
      } else {
        if (numy > 0)
        {
          printf("\nQ2");
        } else{
          printf("\nQ3");
        }
      }
    }
  }

  return 0;
}
