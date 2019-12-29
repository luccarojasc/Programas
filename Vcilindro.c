#include <stdio.h>

    int main(){
    float raio, altura, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    volume= altura* 3.14* (raio* raio);

    printf("O volume do cilindro e: %.2f",volume);

    return 0;
    }
