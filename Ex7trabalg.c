#include <stdio.h>

int main(){
    int vet[20], i, mult;
    mult = 1;
    for(i = 0; i < 20; i++){
        printf("Digite o valor do vetor %d: ", i);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 20; i++){
        if(vet[i]%4 == 0){
            mult = mult * vet[i];
        }
    }
        printf("O resultado da multiplicacao entre os elementos multiplos de 4 e: %f", mult);
        return 0;
}