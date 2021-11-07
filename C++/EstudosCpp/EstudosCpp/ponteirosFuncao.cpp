#include <iostream>

void somar(float *var, float valor)

int main() {
	float num = 0;

	somar(&num, 15);

	std::cout << num <<"\n";

	return 0;
}

void somar(float *var, float valor) {
	*var += valor;
}