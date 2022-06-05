#include <stdio.h>

int expoente(int a, int b);
int soma(int n);
int fatorial(int n);
int fibonacci(int n);
int mdc(int num1, int num2);

int main()
{
    printf("Valor do expoente de 2 elevado a 3: %d\n", expoente(2, 3));
    printf("Valor da soma dos numeros naturais ate 5: %d\n", soma(6));
    printf("Valor do fatorial de 5: %d\n", fatorial(5));
    printf("Valor da sequencia de fibonacci de 9 numeros: %d\n", fibonacci(9));
    printf("Valor do MDC de 12 e 18: %d\n", mdc(18, 12));
}

int expoente(int a, int b)
{
    if(b == 0)
        return 1;
    if(b>0)
        return a * expoente(a, b-1);
}

int soma(int n){
    if(n==1)
        return 1;
    else{
        return n+soma(n-1);
    }
}

int fatorial(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else 
        return n * fatorial(n-1);
}

int fibonacci(int n){
    if(n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int mdc(int num1, int num2)
{
    if(num2 != 0)
       return mdc(num2, num1%num2);
    else 
       return num1;
}