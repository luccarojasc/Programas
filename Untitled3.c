#include <stdio.h>
   int main (){
     float salario,salarioAU,salarioIR;

     printf("Digite o salario inicial: ");
     scanf("%f", &salario);

     salarioAU= salario + salario / 10;
     salarioIR= salario + salarioAU * 15/100;

     printf("Seu salario com o aumento e de: %.2f", salarioAU);
     printf("\n\nSeu salario com o Imposto de Renda e de: %.2f", salarioIR);

     return 0;
     }
      //Desenvolva um algoritmo computacional que receba o valor do salario de um funcionario e calcule
                     um aumento de 10%,e em seguida um desconto de Imposto de Renda de 15%.Exibir o salario inicial,o salário com o aumento e
                     o salário com o desconto

