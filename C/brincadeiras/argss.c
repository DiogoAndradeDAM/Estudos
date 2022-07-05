#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#define escreva printf

int oprintf(char *str, ...){
    va_list args;
    char *fmt;
    unsigned int i;
    va_start(args, str);
}

int main()
{
    escreva("Diogo\n");

    return 0;
}