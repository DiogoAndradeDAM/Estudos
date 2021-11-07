#include <iostream>
#include <queue>

using namespace std;


int main(int argc, char*argv[]){
	queue <string> cartas;
	
	cartas.push("Rei de copas");
	cartas.push("Rei de espadas");
	cartas.push("Rei de ouros");
	cartas.push("Rei de paus");	
	
	std::cout<<"Tamanho da fila "<<cartas.size()<<"\n"<<std::endl;
	std::cout<<"Primeira carta "<<cartas.front()<<"\n"<<std::endl;
	std::cout<<"Ultima carta "<<cartas.back()<<"\n"<<std::endl;
	
	while(!cartas.empty()){
		std::cout<<"Primeira carta "<<cartas.front()<<"\n"<<std::endl;
		cartas.pop();
	}
	
	return 0;
}


