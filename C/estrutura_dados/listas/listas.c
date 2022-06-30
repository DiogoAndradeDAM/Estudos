#include <stdio.h>
#include <stdlib.h>

struct no{
    int value;
    struct no *next;
};

struct queue{
    int tam;
    struct no *first;
    struct no *last;
};

void push(struct queue *f, int _n){
    struct no *aux, *new = (struct no*) malloc(sizeof(struct no));

    if(new){
        new->value = _n;
        new->next = NULL;
        if(f->first == NULL){
            f->first = new;
            f->last = new;
        }else{
            f->last->next = new;
            f->last = new;
        }
        f->tam++;
    }
}

void pop(struct queue *f){
    if(f->first){
        f->first = f->first->next;
        f->tam--;
    }
}

struct queue new_queue(){
    struct queue this;
    this.first = NULL;
    this.last = NULL;
    this.tam = 0;
    return this;
}

int main()
{
    struct queue fila = new_queue();

    push(&fila, 12);
    push(&fila, 13);
    push(&fila, 14);

    pop(&fila);

    printf("%d - %d", fila.first->value, fila.last->value);


    return 0;
}