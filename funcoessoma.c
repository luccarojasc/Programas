#include <stdio.h>

float fatorial(float n1, float fat){
    fat = n1 - 1;
    if (fat >= 1){
        n1 = n1 * fat;
        fat = fat - 1;
    }
 return n1;
   
}

int main(){
    float n1, resultado;
    printf("Digite o numero para calcular seu fatorial");
    scanf("%f",&n1);
    resultado = fatorial(n1, fat);
    printf("\nResultado: %.2f",resultado);

    return 0;
    }