#include <stdio.h>
     int main (){
    float latas, garrafa600, garrafa2, litros1, litros2, litros3, litrost;

    printf("Quantidade de latas de 350ml compradas:  ");
    scanf("%f", &latas);

    printf("Quantidade de garragas de 600ml compradas:  ");
    scanf("%f", &garrafa600);

    printf("Quantidade de garrafas de 2 litros compradas:  ");
    scanf("%f", &garrafa2);

     litros1 = latas * 0.35;
     litros2 = garrafa600 * 0.6;
     litros3 = garrafa2 * 2;
     litrost = litros1 + litros2 + litros3;

     printf("O total de litros e de: %.3f", litrost);

return 0;
}
