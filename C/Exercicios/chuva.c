#include <stdio.h>

int main()
{
    int i, j, d, s, a, r=0;
    scanf("%d", &d);
    int x[d];
    for(i=0; i<d; i++) scanf("%d", &x[i]);
    scanf("%d", &s);
    for(i=0; i<d; i++){
        a=0;
        for(j=i; j<d; j++){
            a += x[j];
            if(a==s){
                r += 1;
                r += (a+x[j+1]==s) ? 1 : 0;
                break;
            }
        }
    }
    printf("%d", r);


    return 0;
}