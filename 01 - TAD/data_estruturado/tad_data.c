#include "tad_data.h"

/***********************************************
* IMPLEMENTACAO
************************************************/

struct data {
    int dia;
    int mes;
    int ano;
};

Data* data_criar(int dia, int mes, int ano){
    Data* d = (Data*) calloc(1,sizeof(Data));
    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
    return d;
}

void data_desalocar(Data** enderecoData){
    free(*enderecoData);
    *enderecoData = NULL;
}

Data* data_clone(Data* d){
    if(d==NULL) return NULL;

    Data* novo = data_criar(d->dia, d->mes, d->ano);
    return novo;
}

bool data_alterar(Data* d, int dia, int mes, int ano){
    if(d == NULL) return false;

    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
    return true;
}

int data_dia(Data* d){
    if(d == NULL) return -1;
    return d->dia;
}

int data_mes(Data* d){
    if(d == NULL) return -1;
    return d->mes;
}

int data_ano(Data* d){
    if(d == NULL) return -1;
    return d->ano;
}

bool data_string(Data* d, char* str){
    if(d == NULL) return false;

    sprintf(str, "%02d/%02d/%d", d->dia, d->mes, d->ano);
    return true;
}

bool data_mesExtenso(Data* d, char* str){
    if(d == NULL) return false;

    char meses[12][10] = {"janeiro","fevereiro","marco","abril","maio","junho",
    "julho","agosto","setembro","outubro","novembro","dezembro"};  
  
    strcpy(str, meses[d->mes-1]);
    return true;        
}