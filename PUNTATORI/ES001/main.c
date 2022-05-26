#include <stdio.h>
#include <stdlib.h>
#define DIM 10
void caricaVet(int v[], int n){
    int k;
    for(k = 0; k<n; k++){
        printf("inserisci elemento: \n");
        scanf("%d", v+k);
    }
}

void stampaVet(int v[], int n){
    int k;
    for(k = 0; k<n; k++){
        printf(" %d ", *(v+k));
    }
    printf("\n");
}

void ordinaVet (int vett[], int n){
    int sup, k, a;

    for(sup = n - 1; sup > 0; sup--){

        for(k = 0; k < sup; k++){
            if(*(vett+k) > *(vett+k+1)){
                a = *(vett+k + 1);
                *(vett+k + 1) = *(vett+ k);
                *(vett+k) = a;
            }
        }
    }
}

int main()
{
    int vet[DIM];

    caricaVet (vet, DIM);
    stampaVet (vet, DIM);
    ordinaVet (vet, DIM);
    stampaVet (vet, DIM);
    return 0;
}
