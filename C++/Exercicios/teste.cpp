#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cstdlib>

int main()
{
    system("clear||cls");
    std::vector<std::string> names {"Diogo", "Douglas", "Ziza"};
    std::pair<std::string, std::string> names_completed[4];

    names.push_back("Jose");

    std::cout << names.size()<<std::endl;

    for(auto i:names){
        std::cout << i<<" - "; 
    }
    std::cout << "\n\n";


    names_completed[0] = std::make_pair("Jose", "Andrade");
    names_completed[1] = std::make_pair("Diogo", "Andrade");

    std::vector<std::pair<std::string, std::string>> vector_names;

    vector_names.push_back(std::make_pair("Diogo", "Andrade"));
    vector_names.push_back(std::make_pair("Jose", "Bezerra"));
    vector_names.push_back(std::make_pair("Ziza", "Andrade"));

    for_each(vector_names.begin(), vector_names.end(), [](std::pair<std::string, std::string> element){
        std::cout << element.first<<" "<<element.second<<"\n";
    });

    std::cout <<"\n\n";

    vector_names.push_back(std::make_pair("Douglas", "Andrade"));

    for(auto n:vector_names){
        std::cout << n.first<<" - "<<n.second<<"\n";
    }


    return 0;
}