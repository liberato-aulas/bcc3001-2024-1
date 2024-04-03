#ifndef TAD_DATA_H
#define TAD_DATA_H
// A sequência de declarações será compilada apenas se o nome da macro não estiver definido. 
// A diretiva de compilação #endif define o fim de uma sequência de declarações para todas as diretivas de compilação condicional.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

/***********************************************
* DEFINIÇÃO
************************************************/

/*** DADOS ****/
typedef struct data Data;

/*** OPERAÇÕES ****/
Data* data_criar(int dia, int mes, int ano);
void data_desalocar(Data** d);
Data* data_clone(Data* d);
bool data_alterar(Data* d, int dia, int mes, int ano);
int data_dia(Data* d);
int data_mes(Data* d);
int data_ano(Data* d);
bool data_string(Data* d, char* str);
bool data_mesExtenso(Data* d, char* str);


#endif