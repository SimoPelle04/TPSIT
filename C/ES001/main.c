#include <stdio.h>
#include <stdlib.h>
#define DIM 100
#define MAX 10
/*SI SCRIVA UN PROGRAMMA CHE:
DECODIFICHI UN DATO STUDENTE E OGNI STUDENTE E' CARRATTERIZZATO DA UN NOME UN COGNOME E UNA MATRICOLA
AQUISISCA I DATI DI 10 STUDENTI E PER OGNI
*/

typedef struct {
    char nome[DIM];
    char cognome[DIM];
    int matricola;
} studente;

int main() {
    studente v[MAX];
    int k;

    for(k=0; k<MAX; k++) {

        printf("inserisci nome: ");
        scanf("%s", &v[k].nome);
        printf("\n inserisci cognome: ");
        scanf("%s", &v[k].cognome);
        printf("\n inserisci numero matricola: ");
        scanf("%d", &v[k].matricola);

    }
    for(k=0; k<MAX; k++) {

        printf("\n %d", k);
        printf("\n nome: %s ", v[k].nome);
        printf("\n cognome: %s", v[k].cognome);
        printf("\n matricola: %d ", v[k].matricola);

    }

    return 0;
}
