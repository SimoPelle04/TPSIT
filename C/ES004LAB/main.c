#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LUNG 100
/*
void inserisciStringa(char s[]) {
    printf("inserisci frase: \n");
    fflush(stdin);
    gets(s);
}

int numeroCaratteri(char s[],int  dim) {
    int k = 0;

    while(k < dim && s[k] != '\0') {
        k++;
    }
    return k;
}

bool isPalindromo(char s[], int n) {
    int j = 0, k = n-1;
    bool ok = true;
    while(j <= k && ok == true) {
        if(*(s+j) == ' '){
            j++;
        }
        if(*(s+k) == ' '){
            k--;
        }

        if(*(s+j) == *(s+k)){
            j++;
            k--;
        }else{
            ok = false;
        }
    }
    return ok;
}

int main() {
    char frase[LUNG];
    int n;

    inserisciStringa(frase);
    n = numeroCaratteri(frase, LUNG);
    if(isPalindromo(frase, n) == true) {
        printf("E' palindroma");
    } else {
        printf("Non e palindroma");
    }
    return 0;
}*/

void inserisciStringa(char *s) {
    printf("inserisci frase: \n");
    fflush(stdin);
    gets(s);
}

int numeroCaratteri(char *s,int  dim) {
    int k = 0;

    while(k < dim && s[k] != '\0') {
        k++;
    }
    return k;
}

bool isPalindromo(char *s, int n) {
    int j = 0, k = n-1;
    bool ok = true;
    while(j <= k && ok == true) {
        if(*(s+j) == ' '){
            j++;
        }
        if(*(s+k) == ' '){
            k--;
        }

        if(*(s+j) == *(s+k)){
            j++;
            k--;
        }else{
            ok = false;
        }
    }
    return ok;
}

int main() {
    char *frase;
    int n;

    frase = (char *) malloc(sizeof(char));
    inserisciStringa(frase);
    n = numeroCaratteri(frase, LUNG);
    if(isPalindromo(frase, n) == true) {
        printf("E' palindroma");
    } else {
        printf("Non e palindroma");
    }
    free(frase);
    return 0;

}
