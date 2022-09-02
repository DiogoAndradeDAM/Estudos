#include <iostream>
#include <cstdlib>

int comparacao(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
   system("clear||cls");

    //Manipulação de dados

    char c[] {"1234"};
    double d;
    int i;

    d = atof(c);
    i = atoi(c);

    std::cout << "double: "<<d<<" Integer: "<<i<<'\n';

    char s[] {"32"};
    d = strtof(s, NULL);
    i = strtof(s, NULL);

    std::cout << "double: "<<d<<" Integer: "<<i<<'\n';

    //Comandos de ambiente

    //Funções para sair
    /*
    atexit(callback_function);
    at_quick_exit(callback_function);

    exit(macro);//EXIT_SUCESS
    quick_exit(macro);
    _Exit(macro);
    */

   const char *p = getenv("PATH");//Pega uma váriavel de ambiente do sistema
   std:: cout <<p<<"\n\n";

    int vetor[10] {9,1,3,2,6,5,4,7,8,10};
    int pesq=7;
    int *pos;

    qsort(vetor, 10, sizeof(int), comparacao);

    for(auto n:vetor){
        std::cout <<n<<" ";
    }
    std::cout <<'\n';

    pos = (int*) bsearch(&pesq, vetor,10, sizeof(int), comparacao);
    std::cout << "The element "<<pesq<<" is in the position: "<<*pos<<'\n';

    //Matematica
    /*
    div_t
    ldiv_t
    lldiv_t

    abs();
    labs();
    llabs();

    div_type = div(divisor, denominador);
    div();
    ldiv();
    lldiv();

    div_type.rem = resto da divisão
    div_type.den = valor da divisão
    */

    return 0;
}