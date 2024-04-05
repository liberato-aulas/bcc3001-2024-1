#include <iostream>
#include <string>

using namespace std;

class Aluno {
  private:
   string ra;
   string nome;

  public:

   Aluno(string _ra, string _nome) {      
      this->ra = _ra;
      this->nome = _nome;
   }

   ~Aluno() { }

   string getRa() { return this->ra; }
   void setRa(string ra) { this->ra = ra; }

   void imprimir() {
      cout << "(" << this->ra << ", " << this->nome << ")" << endl;
   }
};


class Turma {
private:
   string codDisciplina;
   string codTurma;
   string semestre;

   Aluno** alunos;
   int tamVetor;
   int qtde;


public:
   Turma(string semestre, int tamVetor){
      this->semestre = semestre;
      this->codTurma = "";
      this->codDisciplina = "";

      this->alunos = new Aluno*[tamVetor];
      this->tamVetor = tamVetor;
      this->qtde = 0;
   }

   bool matricula(Aluno* a);
   // bool matricula(Aluno a);
   int cancelaMatricula(string ra);
   void imprime();


};

int main(){

   Turma* t1 = new Turma("2024-1", 100);
   Turma* t2 = new Turma("2023-2", 20);

   Aluno* a1 = new Aluno("1", "Joao");
   // Aluno a2("2", "Maria");

   // t1.matricula(a1);
   // t1.matricula(a2);

   // t1.cancelaMatricula("15");
   // t1.imprime();

}