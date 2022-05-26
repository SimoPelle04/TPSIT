#include <stdio.h>
#include <stdlib.h>

//IMPLEMENTARE UNA PILA CON I METODI DELLE CODE

typedef struct nodo
{
    int num;
    struct nodo * next;
} Nodo;

void enqueue(Nodo ** t, int num)
{
    Nodo*coda=*t;
    if(coda==NULL)
    {
        coda=(Nodo*)malloc(sizeof(Nodo));
        coda->num=num;
        coda->next=NULL;
    }
    else
    {
        Nodo * n=(Nodo*)malloc(sizeof(Nodo));
        n->next=coda;
        n->num=num;
        coda=n;
    }
    *t=coda;
}

int denqueue(Nodo ** testa)
{
    int num=0;
    if(*testa==NULL)
    {
        printf("Coda vuota\n");
    }
    else
    {
        Nodo* t= *testa;
        num=t->num;
        *testa=t->next;
    }
    return num;
}

Nodo * formattaLista()
{
    int n;
    printf("Quanti numeri ci sono: ");
    scanf("%d", &n);
    int num;
    Nodo * testa=NULL;
    for(int k=0; k< n; k++)
    {
        printf("inserisci numero: ");
        scanf("%d", &num);
        if(testa==NULL){
            testa=(Nodo*)malloc(sizeof(Nodo));
            testa->num=num;
            testa->next=NULL;
        }else{
        Nodo*next=testa;
        testa=(Nodo*)malloc(sizeof(Nodo));
        testa->num=num;
        testa->next=next;
        }
    }
    return testa;
}


void stampaLista(Nodo*l)
{
    printf("%d ",l-> num);
    if(l->next!=NULL)stampaLista(l->next);

}

void main(){
Nodo* testa=formattaLista();
enqueue(&testa, 12);
enqueue(&testa, 13);
denqueue(&testa);
stampaLista(testa);
}
