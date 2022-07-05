#include <stdio.h>
#include <stdlib.h>

struct no{
    int value;
    struct no *next;
};

struct list{
    unsigned short int tam;
    struct no *last;
};

struct list new_list(){
    struct list this;
    this.last = NULL;
    this.tam = 0;
    return this;
}


int main()
{


    return 0;
}