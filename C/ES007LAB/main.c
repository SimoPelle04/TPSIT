#include <stdio.h>
#include <stdlib.h>
#define LUNG 1000
/*
void inserisciStringa(char s) {
    printf("inserisci frase: \n");
    fflush(stdin);
    gets(s);
}

void unisciStinga(char s1[],char s2[], int n){
    int k = 0, j = 0;

    while(k<n && *(s1+k) != '\0'){
        k++;
    }

    while(k < n && *(s2+j)!=0){

        *(s1+k) = *(s2+j);
        k++;
        j++;
    }

}
int main()
{
    char s1[LUNG];
    char s2[LUNG];

    inserisciStringa(s1);
    inserisciStringa(s2);

    unisciStinga(s1, s2, LUNG);
    printf("%s", s1);
    return 0;
}*/
void inserisciStringa(char *s) {
    printf("inserisci frase: \n");
    fflush(stdin);
    gets(s);
}

void unisciStinga(char *s1,char *s2, int n){
    int k = 0, j = 0;

    while(k<n && *(s1+k) != '\0'){
        k++;
    }

    while(k < n && *(s2+j)!=0){

        *(s1+k) = *(s2+j);
        k++;
        j++;
    }

}
int main()
{
    char *s1;
    char *s2;

    s1 = (char *)malloc(sizeof(char));
    s1 = (char *)malloc(sizeof(char));

    inserisciStringa(s1);
    inserisciStringa(s2);

    unisciStinga(s1, s2, LUNG);
    printf("%s", s1);

    free(s1);
    free(s2);
    return 0;
}
