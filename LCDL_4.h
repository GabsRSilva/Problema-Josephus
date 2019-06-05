/* Header Programa Problema Josephus
* Arquivo: LCDL_4.h
* Autores: Breno G�es do Amaral, Gabrielle Ramos da Silva, 
		   Jolie Caldarone, Victor Barbosa Bulh�es
* Data:    03/06/19  17:00
* Descri��o: Arquivo header com as fun��es de cria��o da lista circular duplamente ligada
			 e da permta��o do Josephus
*/
#include <stdio.h>
#include <stdlib.h>
#include "Booleano.h"


typedef struct Celula{
	int item;
	struct Celula* seguinte;
	struct Celula* anterior;
}Celula;

typedef Celula * Lista;

//interface
Lista criarListaVazia(); 			//cria uma lista vazia
bool verificarVazia(Lista); 		//devolve TRUE se a lista for vazia
void mostrarLista(Lista);			//mostra os elementos da lista em sentido hor�rio
Lista inserir(Lista, int);			//acrescenta item no inicio da lista
Lista inserirFimLista(Lista, int); //acrescenta item no fim da lista
Lista remover(Lista, Celula *);		//remove celula referenciada
Lista esvaziar(Lista);				//remove todos os itens da lista

void permutacaoJosephus(Lista, int, int);  //mostra na tela a permuta��o de Josephus

//implementa��o
Lista criarListaVazia(){
	Lista L;
	L = NULL;
	
	return L;
}

bool verificarVazia(Lista L){
	bool vazia;
	if(L == NULL) vazia = TRUE;
	else vazia = FALSE;
	
	return vazia;
}

void mostrarLista(Lista L){
	
}

Lista inserir(Lista L, int n){
	Celula *novo;
	novo=(Celula*)malloc(sizeof(Celula));
	if(L = NULL){
		novo->item = n;
		novo->seguinte = L;
		novo->anterior = L;
	}else{
		novo->item = n;
		novo->segunte = ;
		novo->anterior = ;
	}
	
	return L;
}

Lista inserirFimLista(Lista L, int n){
	bool proxExiste;
	
	Celula *aux = malloc(sizeof(Celula));
	Celula *nova = malloc(sizeof(Celula));
	
	nova->item = n;
	
	if(aux->seguinte->item == L->item){
		proxExiste = TRUE;
	} else{
		proxExiste = FALSE;
	}
	
	while(proxExiste == TRUE){
		
		aux = aux->seguinte;
		
		if(aux->seguinte->item == L->item){
			proxExiste = TRUE;
		} else{
			proxExiste = FALSE;
		}
	}
	
	nova->anterior = aux;
	nova->seguinte = L;
	aux->seguinte = nova;
	
	return L;
}

Lista remover(Lista L, Celula * rem){
	
	return L;
}

Lista esvaziar(Lista L){
	
	return L;
}

void permutacaoJosephus(Lista L, int n, int m){  //n � o numero de pessoas no circulo e m � o passo da morte
	
	
}
