#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// converte uma string em maiúsculas
void strupper(char s1[]){
  int j=0;
  while (s1[j] != '\0'){
    s1[j] = toupper(s1[j]);
    j++;
  }
  s1[j] = '\0'; //carácter que indica o fim da string
}

int main(){
  setlocale(LC_ALL, "portuguese");

  int cases, i, n=1;
  typedef struct{
    char word[51];
    int cipher;
  } Words;
  printf("Digite a quantidade de palavras: ");
  scanf("%d", &cases);
  Words Case[cases];
  i = cases;
  for (cases; cases > 0; cases--){
    printf("\nInsira a %dª palavra: ", n);
    scanf("%s", &Case[cases].word);
    printf("Insira a quantidade de casa deslocadas: ");
    scanf("%d", &Case[cases].cipher);
    strupper(Case[cases].word);
    n++;
  }
  for (i; i > 0; i--){
    printf("\n- %s\n", Case[i].word);
    printf("- %d", Case[i].cipher);
  }

  return 0;
}
