# include <iostream>
# include <stack>

using namespace std;

int main(int argc, char*argv[]){
	stack <string> cartas; //Em pilhas "os últimos serão os primeiros"
	
	cartas.push("Rei de copas");
	cartas.push("Rei de espadas");
	cartas.push("Rei de ouros");
	cartas.push("Rei de paus");
	
	if (cartas.empty()){ //Empty analiza se a pilha está fazia ou não
		std::cout<< "Pilha vazia\n"<<std::endl;
	} else {
		std::cout<< "Pilha com cortas\n"<<std::endl;
	}
	
	std::cout <<"Tamanho da pilha: "<< cartas.size() << "\n" <<std::endl;
	std::cout <<"Carta do topo " <<cartas.top()/*Mostra o primeiro item da pilha*/ << "\n" <<std::endl;
	
	cartas.pop(); //Retira o primeiro item da pilha
	
	std::cout <<"Tamanho da pilha: "<< cartas.size() << "\n" <<std::endl;
	std::cout <<"Carta do topo " <<cartas.top() << "\n" <<std::endl;
	
	return 0;
}
