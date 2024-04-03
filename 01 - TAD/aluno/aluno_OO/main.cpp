#include <iostream>
#include <string>
#include "aluno.h"

using namespace std;

void teste() {
   // Aluno a;
   Aluno* a = new Aluno();
}

int main() {

   // teste();
   // cout << "Fim" << endl;

   Aluno* a1 = new Aluno("a111", "Joao");
   Aluno* a2 = new Aluno("a222", "Maria");
   Aluno a3("a333", "Jose");

   a1->setRa("a000");
   cout << a1->getRa() << endl;

   a1->imprimir();
   a2->imprimir();
   a3.imprimir();

   delete a1;
   delete a2;
}