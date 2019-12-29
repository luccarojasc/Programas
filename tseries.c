#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    int ep; 
    int dur; 
    int temp;
}Serie;

int main(){
    int x, i, ii;
    printf("Digite o numero de series assistidas: ");
    scanf("%d", &x);
    system("cls");
    Serie srs[x];
    for(i=0; i<x; i++){
    ii = i + 1;
    printf("Digite o nome da %d serie assistida: ", ii);
    scanf("%s", &srs[i].nome);
    system("cls");
    }
    for(i=0; i<x; i++){
        printf("\n-----------------------------------%s-----------------------------------", srs[i].nome);
        printf("\nDigite o numero de temporadas: ");
        scanf("%d", srs[i].temp);
        printf("\nDigite o numero de episodios, em media, de cada temporada: ");
        scanf("%d", srs[i].ep);
        printf("\nDigite a duracao em minutos, em media, de cada episodio: ");
        scanf("%d", srs[i].dur);
    }
    int durc[x], durct = 0;
    float durch[x], durcd[x], durcht = 0, durcdt = 0;
    for(i=0; i<x; i++){
        durc[i] = (srs[i].dur * srs[i].ep) * srs[i].temp;
        durch[i] = durc[i] / 60;
        durcd[i] = durch[i] / 24;
        durct = durct + durc[i];
        durcht = durcht + durch[i];
        durcdt = durcdt + durcd[i];
    }
    system("cls");
    printf("----------------------------------------------------------------------------------------------------");
    for(i=0; i<x; i++){
    printf("\n%s : %d minutos / %.2f horas / %.2f dias assistindo essa serie.", srs[i].nome, durc[i], durch[i], durcd[i]);
    }
    printf("\n\n     No total, foi passado %d minutos / %.2f horas / %.2f dias assistindo series.", durct, durcht, durcdt);
    printf("\n----------------------------------------------------------------------------------------------------");
    return 0;
}