#include <iostream>
#include "bank.hpp"

int main()
{
    Bank *p1 = new Bank(1000, EBankType::normal, "Diogo");

    std::cout << "Conta de "<<p1->get_name()<<"\n";
    std::cout << "- Saldo da conta: "<<p1->get_saldo()<<"\n";
    std::cout << "- Tipo da conta: "<<p1->get_bankType()<<"\n";
    
    return 0;
}