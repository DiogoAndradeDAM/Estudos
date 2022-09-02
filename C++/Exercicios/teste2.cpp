#include <iostream>

int main(void)
{
    char option[10];
    std::cin.ignore(10, " ");
    std::cin.get(option, 10);


    std::cout << "Write: "<<option<<"\nCount: "<<std::cin.gcount();


    return 0;
}