#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");

  float salario = 0, aumento = 0, porcentagem =0;
  printf("Digite seu salário: R$");
  scanf("%f", &salario);
  if (salario <= 0)
  {
    printf("Salário inválido.");
    return 0;
  } else {
    if (salario > 0 && salario <= 400)
    {
      porcentagem = 0.15;
    } else {
      if (salario > 400 && salario <= 800)
      {
        porcentagem = 0.12;
      } else {
        if (salario > 800 && salario <= 1200)
        {
          porcentagem = 0.1;
        } else {
          if (salario > 1200 && salario <= 2000)
          {
            porcentagem = 0.07;
          } else {
            porcentagem = 0.04;
          }
        }
      }
    }
  }
  aumento = salario * porcentagem;
  salario += aumento;
  printf("\nSeu novo salário será de R$%.2f\n", salario);
  printf("Você terá um aumento de %.0f%% (R$%.2f)", porcentagem*100, aumento);
  
  return 0;
}
