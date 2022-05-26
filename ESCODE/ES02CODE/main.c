#include <stdio.h>
#include <stdlib.h>

/*Scrivere una
funzione che inverta una coda, ovvero
produca degli elementi  della coda
di partenza.
*/

typedef struct nodo
{
    int num;
    struct nodo * next;
} Nodo;


//crea lista
Nodo * formattaLista(Nodo** coda)
{
    int n;
    printf("Quanti numeri ci sono: ");
    scanf("%d", &n);
    int num;
    Nodo * head=NULL;
    Nodo *r=(Nodo*)malloc(sizeof(Nodo));
    Nodo * cur=head;
    for(int k=0; k< n; k++)
    {
        printf("Inserisci numero: ");
        scanf("%d", &num);
        if(r==NULL)r=(Nodo*)malloc(sizeof(Nodo));
        r->num=num;
        if(head==NULL)
        {
            head= r;
            cur=r;
        }
        cur->next=r;
        cur=r;
        cur->next=NULL;
        r=NULL;
    }
    *coda=cur;
    return head;
}

//funzioni code
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
        coda->next=(Nodo*)malloc(sizeof(Nodo));
        coda=coda->next;
        coda->num=num;
        coda->next=NULL;
    }
    *t=coda;
}

int denqueue(Nodo ** head)
    int num=0;
    if(*head==NULL)
    {
        printf("Coda Vuota\n");
    }
    else
    {
        Nodo* t= *head;
        num=t->num;
        *head=t->next;
    }
    return num;
}

//stampa lista
void stampaLista(Nodo*l)
{
    if(l->next!=NULL)stampaLista(l->next);
    printf("%d ",l-> num);
}

Nodo* push(Nodo * l, int c)
{
    Nodo * n= (Nodo*)malloc(sizeof(Nodo));
    n->num=c;
    n->next=NULL;
    if(l!=NULL)
    {
        n->next=l;
    }
    return n;
}

//funzioni pile
int pop(Nodo ** l)
{
    Nodo * n= (Nodo*)malloc(sizeof(Nodo));
    n=*l;
    int num=0;
    if(*l==NULL)
    {
        printf("Niente nodi\n");
    }
    else
    {
        num=n->num;
        n=n->next;
        *l=n;
    }
    return num;
}

//inverte coda con appogio di pila
Nodo* invertiCoda(Nodo ** head)
    Nodo * pila=NULL;
    Nodo*t=*head;
    while(t!=NULL)
    {
        pila=push(pila,denqueue(&t));
    }
    while(pila!=NULL){
        if(t==NULL){
          enqueue(&t,pop(&pila));
          *head=t;
        }
        enqueue(&t,pop(&pila));
    }
    return t;

}

int main()
{
    Nodo* coda=NULL;
    Nodo * head=formattaLista(&coda);
    printf("NORMALE: ");
    stampaLista(head);

    printf("INVERTITA: ");
    coda=invertiCoda(&head);
    stampaLista(head);
    denqueue(&head);
    printf("\n");
    stampaLista(head);

}
