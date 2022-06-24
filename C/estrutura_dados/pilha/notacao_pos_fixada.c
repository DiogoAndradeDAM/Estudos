#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    float num;
    struct no *last;
}No;

struct no * push(No *p, float n){
    No *novo = (No*) malloc(sizeof(No));

    if(novo){
        novo->num = n;
        novo->last = p;
        return novo;

    }printf("\nERROR\n");
    return NULL;
}

struct no * pop(No **p){
    No *rm = NULL;

    if(*p){
        rm = *p;
        *p = rm->last;
    }else printf("\nERRRRO\n");
    return rm;
}

void show(No *p){
    printf("\nINICIO\n");
    while(p){
        printf("Valor: %f\n", p->num);
        p = p->last;
    }
    printf("\nFIM\n");
}

float operacao(float n1, float n2, char x){
    switch(x){
        case '+': return n1+n2; break;
        case '-': return n1-n2; break;
        case '*': return n1*n2; break;
        case '/': return n1/n2; break;
        default: return 0.0;
    }
}

float resolver_expressao(char x[]){
    char *pt;
    float num;
    No *n1, *n2, *p = NULL;

    pt= strtok(x, " ");
    while(pt){
        if(pt[0] == '+' || pt[0] == '-' || pt[0] == '*' || pt[0] == '/'){
            n1 = pop(&p);
            n2 = pop(&p);
            num = operacao(n2->num, n2->num, pt[0]);
            p = push(p, num);
            free(n1);
            free(n2);
        }else{
            num = strtol(pt, NULL, 10);
            p = push(p, num);
        }
        pt = strtok(NULL, " ");
    }
    n1 = pop(&p);
    num = n1->num;
    free(n1);
    return num;
}

int main()
{
    char exp[30] = {"5 3 2 + * 4 / 6 -"};

    printf("Resultado de %s\t", exp);
    printf("%f\n", resolver_expressao(exp));

    return 0;
}