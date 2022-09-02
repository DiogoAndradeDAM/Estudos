#include <iostream>

int swap(int *a, int *b){
    int aux = *b;
    *b = *a;
    *a = aux;
}

void bubbleSort(int v[], std::size_t size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i; j++){
            if(v[j+1] < v[j]){
                swap(&v[j+1], &v[j]);
            }
        }
    }
}

#define SIZE_VEC 10

int main(void)
{
    int vet[SIZE_VEC] {0,5,4,3,7,2,1,6,8,9};
    bubbleSort(vet, SIZE_VEC);

    for(auto n:vet){
        std::cout << n<<" ";
    }
}