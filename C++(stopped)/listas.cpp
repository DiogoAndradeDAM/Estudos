#include <iostream>
#include <list>

using namespace std;

int main(int argc, char*argv[]){
	
	list<int> aula,teste;
	list<int>::iterator it;
	
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	
	
	int tam = 10;
	
	for (int i = 0; i < tam; i++){
		aula.push_front(i);
	}
	
	
	
	
	/*
	aula.sort()
	aula.reverse()
	*/
	
	it=aula.begin();
	advance(it,3);
	
	aula.insert(it,0); //Inseri o 0 na posição 3
	aula.erase(--it); //Retira o 0 da posição 3 por quê ela já foi dita
	
	//aula.clear(); //Faz a limpeza total da lista
	
	aula.merge(teste);//Ele retira os elementos da lista teste, deixando-a fazia
	
	std::cout<<"Tamanho da lista: "<<aula.size()<<"\n\n"<<std::endl;
	
	tam = aula.size();
	for (int i=0; i<tam; i++){
		std::cout<<aula.front()<<"\n"<<std::endl;
		aula.pop_front();
	}
	
	return 0;
}
