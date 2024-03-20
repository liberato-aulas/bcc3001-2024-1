#include <iostream>
#include <string>

using namespace std;

int main() {
	string nome1("Joao");		// Inicializa nome1
	string nome2("Luis");	  // Inicializa nome2

	if(nome1 > nome2)
		cout << nome1 << " vem depois de " << nome2 << endl;
	else if(nome1 == nome2)
		cout << "Os nomes são iguais" << endl;
	else
		cout << nome1 << " vem antes de " << nome2 << endl;
}