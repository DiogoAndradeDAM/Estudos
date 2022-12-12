#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv)
{
    char *text = (char*) malloc(30);
    scanf("%30[^\n]s", text);
    printf("%s\n", text);
    printf("%d", strlen(text));
    free(text);
}