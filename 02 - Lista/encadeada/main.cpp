#include <iostream>
#include <string>
#include "listaEncadeada.cpp"

void teste_push_back() {
   ListaEncadeada* lista = new ListaEncadeada();
   lista->push_back(10);
   lista->push_back(20);
   lista->push_back(30);

   lista->print();  // [10,20,30]
   lista->printInverso();
}

void teste_push_front() {
   ListaEncadeada* lista = new ListaEncadeada();
   lista->push_front(10);
   lista->print();  // [10]

   lista->push_front(20);
   lista->print();  // [20,10]

   lista->push_front(30);
   lista->print();  // [30,20,10]

   lista->printInverso();  // [10,20,30]
}

int main() {
   //    teste_push_back();
   teste_push_front();
}