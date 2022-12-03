#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define min(a,b) ( ((a < b) ? a : b) )

int main()
{
    char n1[10], n2[10];
    int number1, number2;

    printf("\nWrite numbers: \n");
    fgets(n1, 10, stdin);
    fgets(n2, 10, stdin);

    number1 = atoi(n1);
    sscanf(n1, "%d", &number2);

    printf("The less number digited is: %d", min(number1, number2));

    return 0;
}