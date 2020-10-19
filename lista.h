#include <stdio.h>
#include <stdlib.h>


//Tipo de dado
typedef struct{
    int num;
    char word;
}ELEM;

//Estrutura de um no da lista
typedef struct no{
    ELEM infor;
    struct no *ant;
    struct no *prox;
}NO;

//Estrutura da lista 
typedef struct{
    NO *inicio,*fim,*sent;
}LISTA;

///Assinaturas das funcoes///
LISTA *cria_lista();
void libera(LISTA *l);


//Funcoes de insercoes

int insercao_ordenada(LISTA *l, ELEM x);

//Demais Funcoes
int remocao(LISTA *l,ELEM x);
void impressao(LISTA *l);
int quantidade(LISTA *l);
