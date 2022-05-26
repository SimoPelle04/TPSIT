#include <stdio.h>
#include <stdlib.h>
#define DIM 20
int  chiediDim(){
    int n;
    do{
        printf("inserisci dimensione: \n");
        scanf("%d", &n);
    }while(n<0);
    return n;
}

void stampaMat(float mat[][DIM], int n1, int n2){
    int k,i;
    for(k = 0; k < n1; k++){
        for(i = 0;i < n2; i++){
            printf("%.2f ", mat[k][i]);
        }
        printf("\n");
    }

}
int main()
{
    float **mat;
    int n1,n2;
    n1 = chiediDim();
    n2 = chiediDim();

    mat = (float **)calloc(n1,sizeof(float *));
    for(int k = 0; k<n1; k++){
        *(mat+k) = (float *)calloc(n2,sizeof(float));
    }
    stampaMat(mat,n1,n2);
    return 0;
}
