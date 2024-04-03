#include <iostream>
#include <string>
#include "aluno.h"

using namespace std;

int main() {
   Aluno* a1 = aluno_criar("a111", "Joao");
   Aluno* a2 = aluno_criar("a222", "Maria");
   Aluno a3;

   aluno_inicializar(&a3, "a333", "Jose");

   aluno_imprimir(a1);
   aluno_imprimir(a2);
   aluno_imprimir(&a3);

   aluno_destruir(a1);
   aluno_destruir(a2);
}