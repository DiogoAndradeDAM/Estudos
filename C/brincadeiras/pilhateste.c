#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

struct no{
    char c;
    struct no *last;
    void(*push)(struct no **, char);
    //void(*pop)(struct no *);
    char(*top)(struct no*);
};

void push(struct no **this, char _c){
    struct no *new = (struct no*) malloc(sizeof(struct no));
    if(new){
        new->c = _c;
        new->last = *this;
        *this = new;
    }else printf("ERROR PUSH()");
}

char top(struct no *this){
    return this->c;
}

struct no * new_stack(){
    struct no *this = (struct no*) malloc(sizeof(struct no));
    this->push = &push;
    this->top = &top;
    return this;
}

int main()
{
    struct no *p=NULL, *p2 = new_stack();
    push(&p, 'a');
    p2->push(&p2, 's');
    p2->push(&p2, 'd');
    printf("%c", top(p2));

    return 0;
}

