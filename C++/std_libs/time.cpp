#include <iostream>
#include <ctime>
#include <cmath>

int numeros_primos(int n);

int main(void)
{
    int primos;
    clock_t t1, t2, t3;
    t1=clock();
    primos = numeros_primos(90000);
    t2=clock();
    t3=difftime(t2,t1);

    std::cout << "Quantidade de números primos: "<<primos<<'\n';
    std::cout << "Tempo de processamento: "<<((float)t3)/CLOCKS_PER_SEC <<" segundos\n";

    time_t t;
    struct tm* infoTempo;
    time(&t);
    infoTempo = localtime(&t);

    std::cout << t<<" Segundos desde 00:00 de 1 de janeiro de 1970"<<'\n';
    std::cout << asctime(infoTempo)<<" Hora atual\n";
    std::cout << ctime(&t)<<" Hora atual com CTIME\n";
    /*
    infoTempo->tm_sec;
    ||->tm_min; int
    ||->tm_hour; int
    ||->tm_mday; int
    ||->tm_mon; int 
    ||->tm_wday; int
    ||->tm_yday; int
    ||->tm_isdst; int
    */
    char buffer[80];
    strftime(buffer,80," Data: %d/%m/%Y\n",infoTempo);
    std::cout << "Hora formatada" << buffer;

    return 0;
}

int numeros_primos(int n){
    int i, j;
    int freq=n-1;
    for(i=2;i<=n;++i){
        for(j=sqrt(i);j>i;--j){
            if(i%j==0){
                --freq;
                break;
            }
        }
    }
    return freq;
}