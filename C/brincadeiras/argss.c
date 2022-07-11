#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char c;
    int d;
}as;

int main(int argc, char *argv[])
{
    as a;
    a.c = 'a';
    a.d = 0;
    as *p = &a;
    as **d = &p;

    printf("%c\n", (*d)->c);
    printf("%d", *d);

    return 0;
}