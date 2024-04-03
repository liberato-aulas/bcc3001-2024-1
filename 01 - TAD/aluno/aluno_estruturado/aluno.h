#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

typedef struct {
   string ra;
   string nome;
} Aluno;

Aluno* aluno_criar(string ra, string nome);
void aluno_inicializar(Aluno* a, string ra, string nome);
void aluno_imprimir(Aluno* a);
void aluno_destruir(Aluno* a);

Aluno* aluno_criar(string ra, string nome) {
   //    Aluno* novo = (Aluno*) malloc(sizeof(Aluno));
   Aluno* novo = new Aluno();
   aluno_inicializar(novo, ra, nome);
   return novo;
}

void aluno_inicializar(Aluno* a, string ra, string nome) {
   a->ra = ra;
   a->nome = nome;
}

void aluno_imprimir(Aluno* a) {
   cout << "(" << a->ra << ", " << a->nome << ")" << endl;
}
void aluno_destruir(Aluno* a) {
   // free(a);
   delete a;
}
