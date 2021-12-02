# include <iostream>

using namespace std;

int main (int argc, char*argv[]){
	enum armasMunicao{revolver=6, pistola=12};
	
	armasMunicao revolverBalas = revolver;
	std::cout<<"Revolver tem "<<revolverBalas<<" balas"<<std::endl;
	
	return 0;
}

