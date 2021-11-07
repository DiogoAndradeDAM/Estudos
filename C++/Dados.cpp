# include <iostream>

# include <string>

/*// A poucas diferenças entre struct e classes são que a estrutura é publica
struct Human {
	Human() {
		this->name = "None";
		this->age = 0;
		this->height = 0.10f;
	};
	Human(std::string n, int age=0) {
		this->name = n;
		this->age = age;
		this->height = 0.10f;
	};
	
	void ShowId() {
		std::cout<<"Name: "<<name<<std::endl;
		std::cout<<"Age: "<<age<<std::endl;
		std::cout<<"Height: "<<height<<std::endl;
	}
	
	std::string name;
	
	int age;
	float height;
};
*/

class Human {
public:
	Human() {
		this->name = "None";
		this->age = 0;
		this->height = 0.10f;
	};
	Human(std::string n, int age=0) {
		this->name = n;
		this->age = age;
		this->height = 0.10f;
	};
	
	void ShowId() {
		std::cout<<"Name: "<<name<<std::endl;
		std::cout<<"Age: "<<age<<std::endl;
		std::cout<<"Height: "<<height<<std::endl;
	}
	
	void Birthday() {
		age++;
		std::cout <<name<< " now id " <<age<<" years old"<<std::endl;
	}
	
private:
	std::string name;
	
	int age;
	float height;
};

int main(int argc, char** argv){
	
	Human diogo("Diogo", 16);
	Human douglas("Douglas", 23);	
	
	diogo.Birthday();
	diogo.Birthday();
	diogo.Birthday();
	diogo.Birthday();
	std::cout<<"\n"<<std::endl;
	
	//me.name = "Diogo";
	//me.age = 16;
	//me.height = 1.70f;
	diogo.ShowId();
	std::cout<<"\n"<<std::endl;
	douglas.ShowId();
	
	//std::cout<<me.name<<"\n"<<me.age<<"\n"<<me.height<<std::endl;
	
	return 0;
}

