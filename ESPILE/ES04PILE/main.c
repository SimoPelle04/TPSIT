
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 6
#define MAXSIZE 50

//Usa una pila per l'inserimento dei dati e stampa solamente i numeri pari e li sommi stampando il risultato

/*typedef struct s_queue_node {
    int elemento;
    struct s_queue_node*next;
} Queue_node;*/

int stack[50];
int top = -1;

int isempty() {

    if(top == -1)
        return 1;
    else
        return 0;
}

int isfull() {

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

char peek() {
    return stack[top];
}

char pop(char data) {

    if(!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Impossibile prelevare dato, Stack vuoto.\n");
    }
}

void push(char data) {

    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Impossibile inserire dati, Stack Pieno.\n");
    }
}

int main() {



}
