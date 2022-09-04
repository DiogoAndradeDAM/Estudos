#include <iostream>
#include <utility>

int main(void)
{
    int a=5, b=10;
    std::swap(a,b);
    std::cout <<"a: "<<a<<" b: "<<b<<'\n';

    std::pair<int,char> teste1;

    teste1 = std::make_pair(17,'D');

    return 0;
}