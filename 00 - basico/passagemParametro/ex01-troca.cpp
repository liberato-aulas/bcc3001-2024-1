#include<iostream>
using namespace std;


void troca_por_valor(int a, int b){    
    int temp = a;
    a = b;
    b = temp;
}
void troca_por_ponteiro(int* a, int* b){    
    int temp = *a;
    *a = *b;
    *b = temp;
}

void troca_por_referencia(int &a, int &b){    
    int temp = a;
    a = b;
    b = temp;
}




int main(){
    int x = 10;
    int y = 20;

    cout << "Valores originais" << endl;    
    printf("x: %d y: %d\n", x, y);

    
    // cout << endl;
    // cout << "Troca por valor" << endl;    
    // troca_por_valor(x, y);
    // printf("x: %d y: %d\n", x, y);

    // x = 10, y = 20;
    // cout << endl;
    // cout << "Troca por referencia com ponteiros" << endl;
    // troca_por_ponteiro(&x, &y);
    // printf("x: %d y: %d\n", x, y);
    
    x = 10, y = 20;
    cout << endl;
    cout << "Troca por referencia" << endl;

    // troca_por_valor(x, y);
    // troca_por_ponteiro(&x, &y);
    troca_por_referencia(x, y);

    printf("x: %d y: %d\n", x, y);

    return 0;
}