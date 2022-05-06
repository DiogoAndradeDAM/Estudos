#include <stdio.h>

int fibonacci(int n);

int main()
{
    int val = fibonacci(5);

    printf("O valor do fibonacci: %d", val);

    return 0;
}

int fibonacci(int n)
{
    if(n <= 0){
        return 1;
    } else {
        return n * fibonacci(n-1);
    }
}
