#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    char texto[500];

    printf("GETS\n");
    printf("-----------------\n");
    
    printf("Digite um texto: ");
    gets(texto);
    printf("Texto: %s \n", texto);

    printf("\n\n");

    string str;
    printf("GETLINE\n");
    printf("-----------------\n");
    
    cout << "Digite um texto: ";
    getline(cin, str);
    
    cout << "Texto: " << str << endl;


}