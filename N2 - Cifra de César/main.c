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

// Cifra de César
void cesar(char s1[], int k){
  int c=0;
  while (s1[c] != '\0'){
    s1[c] -= k;
    if((s1[c]) > 90){
      s1[c] -= 26;
    }
    if((s1[c]) < 65){
      s1[c] += 26;
    }
    c++;
  }
  s1[c] = '\0';
}

int main(){
  setlocale(LC_ALL, "portuguese");

  int cases, i, n=1;
  typedef struct{
    char word[51];
    int key;
  } Words;
  printf("Digite a quantidade de palavras: ");
  scanf("%d", &cases);
  Words Case[cases];
  i = cases;
  for (cases; cases > 0; cases--){
    printf("\nInsira a %dª palavra: ", n);
    scanf("%s", &Case[cases].word);
    printf("Insira a chave (nº entre 0 e 25): ");
    scanf("%d", &Case[cases].key);
    strupper(Case[cases].word);
    n++;
  }
  for (i; i > 0; i--){
    printf("\n- %s\n", Case[i].word);
    printf("- %d", Case[i].key);
    cesar(Case[i].word, Case[i].key);
    printf("\n- - %s", Case[i].word);
  }

  return 0;
}
