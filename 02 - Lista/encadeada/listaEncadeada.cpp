
#include <string>

class No {
  public:
   No* ant;
   int dado;
   No* prox;

   No() {}
   No(int dado) { this->dado = dado; }
   No(No* ant, int dado, No* prox) {
      this->ant = ant;
      this->dado = dado;
      this->prox = prox;
   }
};

class ListaEncadeada {

  private:
   No* primeiro;
   No* ultimo;
   int qtde;

  public:
   ListaEncadeada() {
      this->primeiro = nullptr;
      this->ultimo = nullptr;
      this->qtde = 0;
   }
   ~ListaEncadeada();

   // Insere o elemento e na última posição
   bool push_back(int e) {
      No* novo = new No(nullptr, e, nullptr);

      if (this->empty()) {
         this->primeiro = novo;
      } else {
         this->ultimo->prox = novo;
         novo->ant = this->ultimo;
      }
      this->ultimo = novo;
      this->qtde++;
      return true;
   }
   // Insere o elemento e na primeira posição
   bool push_front(int e) {

      No* novo = new No(nullptr, e, nullptr);

      if (this->empty()) {
         this->ultimo = novo;
      } else {
         novo->prox = this->primeiro;
         this->primeiro->ant = novo;
      }
      this->primeiro = novo;
      this->qtde++;
      return true;
   }

   // Insere o elemento e na posição pos
   bool insert(int pos, int e) {

      if (this->empty()) {
         return this->push_back(e);
      } else if (pos == 0) {
         return this->push_front(e);
      } else if (pos == this->qtde) {
         return this->push_back(e);
      } else {
         No* novo = new No(nullptr, e, nullptr);
         No* aux = this->primeiro;
         for (int i = 0; i < pos - 1; i++) {
            aux = aux->prox;
         }
      }

      this->qtde++;
      return true;
   }

   // Remove o último elemento
   // int pop_back();
   // Remove o primeiro elemento
   // int pop_front();
   // Remove o elemento da posição pos e retorna o elemento removido
   // int erase(int pos);

   // Retorna o primeiro elemento
   // int front();
   // Retorna o último elemento
   // int back();
   // Retorna o elemento da posição pos
   // int at(int pos);

   // Torna a lista vazia
   // void clear();

   // Verifica se o vetor está vazio
   bool empty() { return this->qtde == 0; }

   // Devolve a quantidade de elementos
   // int size();
   // Substitui o elemento da posição pos pelo elemento e
   // bool replace(int pos, int e);

   // Imprime todos os elementos no formato [1,2,3]
   void print() {
      printf("[");

      for (No* aux = this->primeiro; aux != nullptr; aux = aux->prox) {
         printf("%d", aux->dado);
         if (aux != this->ultimo) printf(",");
      }

      // No* aux = this->primeiro;
      // while (aux != nullptr) {
      //    printf("%d", aux->dado);
      //    aux = aux->prox;
      // }

      printf("]\n");
   }
   void printInverso() {
      printf("[");

      for (No* aux = this->ultimo; aux != nullptr; aux = aux->ant) {
         printf("%d", aux->dado);
         if (aux != this->primeiro) printf(",");
      }

      printf("]");
   }
};