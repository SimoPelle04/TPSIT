#include <stdio.h>
#include <stdlib.h>

int chiediDim(){
    int n;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    return n;
}


int main()
{
    int r;
    int c;
    int **a;

    printf("Righe:\n");
    r = chiediDim();
    printf("Colonne:\n");
    c = chiediDim();

    a = (int **)malloc(r*sizeof(int *));
    for(int i=0;i<c;i++){
        a[i]=(int *)malloc(c*sizeof(int));
    }

    for(int k=0;k<r;k++){
        for(int j=0;j<c;j++){
            printf("Inserisci elemento [%d][%d]: ", k,j);
            scanf("%d", &a[k][j]);
        }
    }

    for(int k=0;k<r;k++){
        for(int j=0;j<c;j++){
            printf("%d ", a[k][j]);
        }
        printf("\n");
    }

    free(a);


    return 0;
}
