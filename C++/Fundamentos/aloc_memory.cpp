#include <iostream>
#include <stdio.h>//gets()
#include <stdlib.h>// para malloc()

using namespace std;

int main()
{
    char *vnome;
    vnome = (char*) malloc(sizeof(char)); //o typecast (char*) é para mudar o retorno de malloc que é void

    gets(vnome);//Serve para pegar caracteres sem para em espaços(\b)
    cout << vnome;
}
