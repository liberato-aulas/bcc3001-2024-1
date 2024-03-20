#include<iostream>
using namespace std;


const int TAMANHO = 10;

int main(){

    int vetorEstatico[TAMANHO];

    int* vetorDinamico1 = (int*) calloc(TAMANHO, sizeof(int));
    int* vetorDinamico2 = new int[TAMANHO];


    free(vetorDinamico1);
    delete [] vetorDinamico2;

    return 0;
}