#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *next;
    int value;
};

struct Stack{
    struct Node *top;
    int tam;
    void (*push)(struct Stack*, int);
    void (*popnr)(struct Stack*);
    struct Node* (*popr)(struct Stack*);
};

void push_Stack(struct Stack *self, int v){
    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    if(new){
        new->value = v;
        new->next = self->top;
        self->top = new;
        self->tam++;
    }
}

void pop_Stacknr(struct Stack *self){
    if(self->top){
        struct Node *rm = self->top;
        self->top = rm->next;
        self->tam--;
        free(rm);
    }else self->top = NULL;
}

struct Node* pop_Stackr(struct Stack *self){
    if(self->top){
    struct Node *rm = self->top;
        self->top = rm->next;
        self->tam--;
        return rm;
    }else return NULL;
}

void new_Stack(struct Stack *self){
    self->tam = 0;
    self->top = NULL;
    self->push = &push_Stack;
    self->popnr = &pop_Stacknr;
    self->popr = &pop_Stackr;
}

int main()
{
    struct Stack s;
    new_Stack(&s);
    s.push(&s, 10);
    s.push(&s, 20);
    printf("%d - ", s.top->value);
    s.popnr(&s);
    printf("%d", s.top->value);
}