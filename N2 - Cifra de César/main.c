#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int cases, cipher;
  char word[51];
  printf("Digite a quantidade de palavras: ");
  scanf("%d", &cases);
  for (cases; cases > 0; cases--)
  {
    printf("\nInsira a palavra com todas as letras maiúsculas: ");
    scanf("%s", &word);
    printf("- - %s", word);
  }
  

  return 0;
}
