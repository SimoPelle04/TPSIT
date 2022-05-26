#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM  100


/*
void caricaV(int v[], int n){
    int k;

    for(k = 0; k < n; k++){
        printf("\nInserisci il valore della cella [%d]: ", k);
        scanf("%d", (v+k));
    }
    return;
}

void stampaV(int v[], int n){
    int k;

    for(k = 0; k < n; k++){
        printf("%d | ", *(v+k));
    }
    return;
}

void invertiV(int v[], int n){
    int k, j = n - 1, x;

    for(k = 0; k < n/2; k++){
        x = *(v+k);
        *(v+k) = *(v+j-k);
        *(v+j-k) = x;
    }
    return;
}

int main()
{
    int v[DIM];
    int n;

    srand(time(NULL));

    do{
        printf("Inserisci il numero di valori del vettore: ");
        scanf("%d", &n);
    }while(n < 0 || n > DIM);

    caricaV(v, n);
    printf("VETTORE NORMALE: \n");
    stampaV(v, n);

    invertiV(v, n);
    printf("\nVETTORE INVERTITO: \n");
    stampaV(v, n);

    printf("\n");
    return 0;
}*/
void caricaV(int *v,int n){
    int k;

    for(k = 0; k < n; k++){
        printf("\nInserisci il valore della cella [%d]: ", k);
        scanf("%d", (v+k));
    }
    return;
}

void stampaV(int *v,int n){
    int k;

    for(k = 0; k < n; k++){
        printf("%d | ", *(v+k));
    }
    return;
}

void invertiV(int *v,int n){
    int k, j = n - 1, x;

    for(k = 0; k < n/2; k++){
        x = *(v+k);
        *(v+k) = *(v+j-k);
        *(v+j-k) = x;
    }
    return;
}

int main()
{
    int *v;
    int n;

    srand(time(NULL));
    v = (int *)malloc(sizeof(int));
    do{
        printf("Inserisci il numero di valori del vettore: ");
        scanf("%d", &n);
    }while(n < 0 || n > DIM);

    caricaV(v, n);
    printf("VETTORE NORMALE: \n");
    stampaV(v, n);

    invertiV(v, n);
    printf("\nVETTORE INVERTITO: \n");
    stampaV(v, n);

    printf("\n");
    free(v);
    return 0;
}
