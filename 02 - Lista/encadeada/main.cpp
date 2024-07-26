#include <iostream>
#include <string>
#include "listaEncadeada.cpp"

int main(){

    ListaEncadeada* lista = new ListaEncadeada();

    lista->push_back(10);
    lista->push_back(20);
    lista->push_back(30);
    lista->push_front(200);
    lista->insert(1,500);


    lista->print(); // [200,500,10,20,30]

}