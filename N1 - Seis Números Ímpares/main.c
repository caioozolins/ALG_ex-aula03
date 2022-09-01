#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int num, cont;
  num, cont = 0;
  printf("Digite um número positivo: ");
  scanf("%d", &num);
  if (num % 2 == 0){
    num++;
    printf("- %d\n", num);
  } else{
    printf("- %d\n", num);
  }
    while (cont < 5){
    num = num + 2;
    printf("- %d\n", num);
    cont++;
  }

  return 0;
}
