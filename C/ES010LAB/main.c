#include <stdio.h>
#include <stdlib.h>

int chiediDim(){
    int n;
    do{
        printf("Inserisci la dimensione del vettore: ");
        scanf("%d", &n);
    }while(n<0);
    return n;
}

int main()
{
    int n;

    float somma=0;
    float *v;

    n = chiediDim();
    v=(float *)malloc(n*sizeof(float));

    for(int k=0;k<n;k++){
        printf("Inserisci valore per la cella [%d]: ", k);
        scanf("%f", (v+k));
    }

    printf("\n");

    for(int k=0;k<n;k++){
        printf("%.2f ", *(v+k));
    }

    for(int j=0;j<n;j++){

        for(int a=j+1;a<n;a++){
            if(*(v+a)==*(v+j)){
            *(v+a)=0;
            *(v+j)=0;
            }
        }
    }

    printf("\n");

    for(int k=0;k<n;k++){
        somma=somma+*(v+k);
    }

    printf("\n");
    printf("Somma dei rimanenti: %2.f", somma);


    return 0;
}

