#include <stdio.h>
#include <math.h>
     int main (){
         float x1, x2, y1, y2, dist;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

     dist= sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("A distância entre os dois pontos e:  %.2f", dist);

return 0;
     }
