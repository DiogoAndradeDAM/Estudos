#include <iostream>

int main()
{
    int *p;
    int vetor[10];

   
    p = &vetor[0]; // p=vetor;
    std::cout << "\n" << p << "\n";
    p = &vetor[1];
    std::cout << "\n" << p << "\n";
    *p = 10;

    std::cout << "\n" << vetor[1] << "\n";

    *(p++);
    *p = 20;
    std::cout << "\n" << vetor[2] << "\n";

    return 0;
}

