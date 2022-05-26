#include <stdio.h>
#include <stdlib.h>
#define DIM 5
#define MAXSIZE 50

//ES INVERTI PILA

int stack[50];
int top = -1;


//pila vuota?
int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}

//pila piena?
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

//cima pila
char peek(){
   return stack[top];
}

//prendi dato
char pop(char data) {

   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Impossibile prelevare dato, Stack vuoto.\n");
   }
}

//inserisci dato
void push(char data) {

   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Impossibile inserire dati, Stack Pieno.\n");
   }
}

//inverti pila
void invertiPila(int vet[]){
    int k;
    for(k = DIM; k >= 0; k--){
        push(vet[k]);
    }
}

void main() {
    int vet[DIM];
    int k = 0, elemento;

    for(k=0 ; k< DIM; k++){
        printf("inserisci l'elemento %d :",k);
        scanf("%d", &elemento);

        vet[k] = elemento;
    }

    invertiPila(vet);

    while(top>=0){
        elemento = pop(stack[top]);
        printf(" %d ",elemento);
    }

    printf("\n");
    system("PAUSE");
    return;
}
