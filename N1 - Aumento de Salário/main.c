#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  double salario, aumento;
  printf("Digite seu sal�rio: ");
  scanf("%lf", &salario);
  if (salario > 2000){
    printf("\nSeu sal�rio � R$%.2lf\n", salario);
    aumento = (salario*0.04);
    salario = salario + aumento;
    printf("Voc� teve um aumento de R$%.2lf\n", aumento);
    printf("Seu novo sal�rio ser� de R$%.2lf\n", salario);
    printf("Em percentual 4%%");
  } else {
    if (salario > 1200 && salario <= 2000){
      printf("\nSeu sal�rio � R$%.2lf\n", salario);
      aumento = (salario*0.07);
      salario = salario + aumento;
      printf("Voc� teve um aumento de R$%.2lf\n", aumento);
      printf("Seu novo sal�rio ser� de R$%.2lf\n", salario);
      printf("Em percentual 7%%");
    } else {
      if (salario > 800 && salario <= 1200){
        printf("\nSeu sal�rio � R$%.2lf\n", salario);
        aumento = (salario*0.1);
        salario = salario + aumento;
        printf("Voc� teve um aumento de R$%.2lf\n", aumento);
        printf("Seu novo sal�rio ser� de R$%.2lf\n", salario);
        printf("Em percentual 10%%");
      } else {
        if (salario > 400 && salario <= 800){
          printf("\nSeu sal�rio � R$%.2lf\n", salario);
          aumento = (salario*0.12);
          salario = salario + aumento;
          printf("Voc� teve um aumento de R$%.2lf\n", aumento);
          printf("Seu novo sal�rio ser� de R$%.2lf\n", salario);
          printf("Em percentual 12%%");
        } else {
          if (salario > 0 && salario <= 400){
            printf("\nSeu sal�rio � R$%.2lf\n", salario);
            aumento = (salario*0.15);
            salario = salario + aumento;
            printf("Voc� teve um aumento de R$%.2lf\n", aumento);
            printf("Seu novo sal�rio ser� de R$%.2lf\n", salario);
            printf("Em percentual 15%%");
          } else {
            printf("Sal�rio inv�lido");
          }
          
        }
        
      }
      
    }
    
  }

  return 0;
}
