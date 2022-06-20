#include <stdio.h>
#include <stdlib.h>

typedef struct no{
   struct no *last; 
   char c;
}No;

struct no * push(No *p, char c){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->c = c;
        novo->last = p;
        return novo;

    }else printf("\nERROR\n");
    return NULL;
}

struct no * pop(No **p){
    No *rm = NULL;

    if(*p){
        rm = *p;
        *p = rm->last;

    }else printf("\nERRRROR\n");
    return rm;
}

char last(No *p){
    return p->c;
}

struct no * clear(No *p){
    No *rm = NULL;

    while(p){
        rm = pop(&p);
    }

    return rm;
}

char * reverse_str(char x[]){
    char *c;
    No *p=NULL, *rm;
    unsigned int i=0, z=0;

    while(x[i] != '\0'){
        p = push(p, x[i]);
        i++;
    }
    
    for(z=0; z<=i; z++){
        rm = pop(&p);
        *(c+i) = rm->c;
        free(rm);
    }

    return c;
}

int main()
{
    char c[50];
    scanf("%49[^\n]", c);
    printf("%s", reverse_str(c));
    

    return 0;
}