#ifndef BANK_HPP_INCLUDED
#define BANK_HPP_INCLUDED

enum EBankType {normal, poupanca};
std::string nameBankType[2] {"Normal", "Poupanca"} ;

class Bank
{
    private:
        int saldo;
        EBankType typeBank;
        std::string name;

    public:

    Bank();

    Bank(int saldo, EBankType type, std::string namePerson);

    int get_saldo(){return this->saldo;}

    std::string get_bankType(){return nameBankType[this->typeBank];}

    std::string get_name(){return this->name;}
};

Bank::Bank()
{
    this->saldo=0;
    this->typeBank=EBankType::normal;
    this->name="none";
}

Bank::Bank(int saldo, EBankType type, std::string namePerson)
{
    this->saldo=saldo;
    this->typeBank=type;
    this->name=namePerson;
}

#endif