#include <stdio.h>
#include <math.h>

/*
Criar um programa que faça uma função do segundo grau e retorne como
ponteiro os valores de X2 e X1
*/

int delta(const double a, const double b, const double c){
    double delta = b*b - 4*a*c;
    if(delta < 0)
        return -1;
    else 
        return delta;
}

void baskhara(const double a, const double b, const double c, double *x1, double *x2){
    if(delta(a, b, c) == -1){
        *x1 = 0;
        *x2 = 0;
    }else{
        if(delta(a,b,c) == 0){
            *x1 = ((-b) + sqrt(delta(a,b,c)))/(2*a);
            *x2 = *x1;
        } else {
            *x1 = ((-b) + sqrt(delta(a,b,c)))/(2*a);
            *x2 = ((-b) - sqrt(delta(a,b,c)))/(2*a);
        }
    }
}

int main()
{
    double a=5, b=6, c=1, x1, x2;
    baskhara(a, b, c, &x1, &x2);
    printf("The value of x1: %.3f and x2: %.3f", x1, x2);

    return 0;
}