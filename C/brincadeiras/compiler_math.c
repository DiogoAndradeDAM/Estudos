#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char argv[])
{
    FILE *file = fopen("legal.math", "r");
    char *text, *txt;
    int var;
    if(file){
        fgets(text, 100, file);
        switch(text[2]){
            case '+': var = (int) text[0] + text[4]; break;
            case '-': var = (int) text[0] - text[4]; break;
        }
        printf("%d", var);
    }   

    return 0;
}