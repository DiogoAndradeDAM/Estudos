#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ** set_multarray(size_t s1, size_t s2){
    int **mat = (int**) calloc(s1, sizeof(int*)), i;
    //mat = (int**) calloc(s1, sizeof(int*));
    for(i=0; i<s2; i++) *(mat + i) = (int*) calloc(s2, sizeof(int));

    return mat;
}

int main (void)
{
    int **mymat = set_multarray(5,5), i, j;

    srand(time(NULL));

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            *(*(mymat+i)+j) = (rand() % 10);
            printf("%d ", *(*(mymat+i)+j));
        }
        putc('\n', stdout);
    }

    return 0;
}