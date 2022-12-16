#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** alocate_mat(size_t s1, size_t s2){
    int **mat = (int**) calloc(s1, sizeof(int*));
    for(int i=0; i<s1; i++) *(mat+i) = (int*) calloc(s2, sizeof(int));
    return mat;
}

void desalocate_mat(int **mat, size_t s){
    for(int i=0; i<s; i++) free(*(mat+i));
    free(mat);
}

int main(int argc, char* argv)
{
    int **mat = alocate_mat(5,5);
    int i, j;
    srand(time(NULL));
    for(i=0; i<5; i++){
        for(j=0; j<5; j++) *(*(mat+i)+j) = rand() % 10;
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++) printf("%d ", *(*(mat+i)+j));
        printf("\n");
    }

    desalocate_mat(mat, 5);
}