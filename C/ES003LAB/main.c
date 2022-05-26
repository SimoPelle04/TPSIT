#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 40
#define RIGHE 30



typedef struct {
    char numero[DIM];
    char titoloFilm[DIM];
    char genere[DIM];
    char annoUscita[DIM];
    char disponibilita[DIM];
} Cinema;

int contaRighe(char nomeFile[]){
    FILE *fp;
    int c=0;
    char line[100];
    fp = fopen(nomeFile, "r");

    while(fgets(line, 100, fp)){
         c++;
    }
    return c;
}

void caricaVettore(Cinema v[], int n, char nomeFile[]) {
    FILE *fp;
    int c=0;
    char line[100];
    fp = fopen(nomeFile, "r");
    for(int i=0;i<n;i++){
        fgets(line, 100, fp);
        char* pezzo = strtok(line, ",");
        while(pezzo != NULL){
            switch(c){
            case 0:
                strcpy((*(v+i)).numero, pezzo);
                break;
            case 1:
                strcpy((*(v+i)).titoloFilm, pezzo);
                break;
            case 2:
                strcpy((*(v+i)).genere, pezzo);
                break;
            case 3:
                strcpy((*(v+i)).annoUscita, pezzo);
                break;
            case 4:
                strcpy((*(v+i)).disponibilita, pezzo);
                break;
            }
            c++;
            pezzo = strtok(NULL, ",");
        }
        c=0;
    }
}

void stampaVettore(Cinema v[], int n){
    for(int k=0;k<n;k++){
        printf("%s   %s   %s   %s   %s", (*(v+k)).numero, (*(v+k)).titoloFilm, (*(v+k)).genere, (*(v+k)).annoUscita, (*(v+k)).disponibilita);
    }
}

int main() {
    system("mode con: cols=90 lines=35");
    int n;
    Cinema* film;

    n = contaRighe("listafilm.csv");     //conta le righe della tabella
    printf("%d\n", n);

    film = (Cinema*)malloc(n*sizeof(Cinema));

    caricaVettore(film,n, "listafilm.csv");
    stampaVettore(film, n);

    free(film); //libera area di memoria occupata da arrey
    return 0;
}
