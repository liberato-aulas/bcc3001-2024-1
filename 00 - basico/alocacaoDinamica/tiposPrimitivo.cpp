#include<iostream>
using namespace std;

int main(){


    int* p1 = (int*) malloc(sizeof(int));
    *p1 = 200;
    cout << endl;
    printf("p1 : %u\n", p1);
    printf("*p1: %u\n", *p1);
    printf("&p1: %u\n", &p1);
    
    
    // int* p1 = (int*) malloc(sizeof(int));
    int* p2 = new int(100);
    // *p2 = 50;
    cout << endl;
    printf("p2 : %u\n", p2);
    printf("*p2: %u\n", *p2);
    printf("&p2: %u\n", &p2);
 

    free(p1);
    delete p2;

    p1 = NULL;
    p2 = nullptr;   // a linguagem c++ permite usar "NULL" ou "nullptr" para indicar um ponteiro nulo.

    

    return 0;
}