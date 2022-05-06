#include <stdio.h>

int main()
{
    enum arma{rifle, pistola=100, escopeta, revolver};

    arma armasAmmu;

    armasAmmu=rifle;
    printf("Valor : %d \n", armasAmmu);

    armasAmmu=escopeta;
    printf("Valor : %d \n", armasAmmu);

    return 0;
}