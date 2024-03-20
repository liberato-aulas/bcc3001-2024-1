#include <iostream>
using namespace std;

int main(){

    int i;
    printf("SCANF E PRINTF\n");
    printf("-----------------\n");
    
    printf("Digite um numero: ");
    scanf("%d", &i);
    printf("Numero informado: %d \n", i);


    printf("\n\n");
    printf("CIN E COUT\n");
    printf("-----------------\n");

    printf("Digite um numero: ");
    cin >> i;    
    cout << "Numero informado: " << i << endl;

}