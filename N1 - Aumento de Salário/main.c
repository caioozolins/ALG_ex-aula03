#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  double salario, aumento;
  printf("Digite seu salário: ");
  scanf("%lf", &salario);
  if (salario > 2000){
    printf("\nSeu salário é R$%.2lf\n", salario);
    aumento = (salario*0.04);
    salario = salario + aumento;
    printf("Você teve um aumento de R$%.2lf\n", aumento);
    printf("Seu novo salário será de R$%.2lf\n", salario);
    printf("Em percentual 4%%");
  } else {
    if (salario > 1200 && salario <= 2000){
      printf("\nSeu salário é R$%.2lf\n", salario);
      aumento = (salario*0.07);
      salario = salario + aumento;
      printf("Você teve um aumento de R$%.2lf\n", aumento);
      printf("Seu novo salário será de R$%.2lf\n", salario);
      printf("Em percentual 7%%");
    } else {
      if (salario > 800 && salario <= 1200){
        printf("\nSeu salário é R$%.2lf\n", salario);
        aumento = (salario*0.1);
        salario = salario + aumento;
        printf("Você teve um aumento de R$%.2lf\n", aumento);
        printf("Seu novo salário será de R$%.2lf\n", salario);
        printf("Em percentual 10%%");
      } else {
        if (salario > 400 && salario <= 800){
          printf("\nSeu salário é R$%.2lf\n", salario);
          aumento = (salario*0.12);
          salario = salario + aumento;
          printf("Você teve um aumento de R$%.2lf\n", aumento);
          printf("Seu novo salário será de R$%.2lf\n", salario);
          printf("Em percentual 12%%");
        } else {
          if (salario > 0 && salario <= 400){
            printf("\nSeu salário é R$%.2lf\n", salario);
            aumento = (salario*0.15);
            salario = salario + aumento;
            printf("Você teve um aumento de R$%.2lf\n", aumento);
            printf("Seu novo salário será de R$%.2lf\n", salario);
            printf("Em percentual 15%%");
          } else {
            printf("Salário inválido");
          }
          
        }
        
      }
      
    }
    
  }

  return 0;
}
