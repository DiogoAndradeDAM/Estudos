#include <iostream>
#include <stdio.h>
#include <math.h>

int main(){
	
	char name[5];
	int age;
	float pi = M_PI;
	scanf("%s %u",&name,&age);//Sempre coloque o endereço
	printf("Name: %s \nAge: %u \n", name, age);
	printf("The value of Pi is: %.2f \t", pi);//Os dois pontos indicam as casas decimais
	printf("The PI with 07 decimals: %07.1f \n", pi);
	
	
	return 0;
}
