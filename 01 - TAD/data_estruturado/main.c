#include<stdio.h>
#include<stdlib.h>
#include "tad_data.h"


int main(){
    char str[50];

    Data* d1 = data_criar(3,4,2023);
    data_string(d1, str);
    printf("%s\n", str);

    data_desalocar(&d1);


    
    return 0;
}