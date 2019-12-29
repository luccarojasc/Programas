#include <stdio.h>

  int main(){
      float prova1, prova2, trab1, peso1, peso2, nota1, nota2, nota3, nf1;

     printf("Digite a nota de sua primeira prova:  ");
     scanf("%f",&prova1);
     printf("Digite a nota de sua segunda prova:  ");
     scanf("%f",&prova2);
     printf("Digite a nota de seu trabalho:  ");
     scanf("%f",&trab1);
     peso1 = 4.5;
     peso2 = 1;
      nota1 = prova1 * peso1;
      nota2 = prova2 * peso1;
      nota3 = trab1 * peso2;
      nf1 = (nota1 + nota2 + nota3) / (peso1 + peso1 + peso2);
      printf("\n\nA sua media e: %.2f",nf1);
     scanf("%f",&nf1);

     return 0;
  }
