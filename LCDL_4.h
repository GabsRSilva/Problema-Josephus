/* Header Programa Problema Josephus
* Arquivo: LCDL_4.h
* Autores: Breno Góes do Amaral, Gabrielle Ramos da Silva, 
		   Jolie Caldarone, Victor Barbosa Bulhões
* Data:    03/06/19  17:00
* Descrição: Arquivo header com as funções de criação da lista circular duplamente ligada
			 e da permtação do Josephus
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
void mostrarLista(Lista);			//mostra os elementos da lista em sentido horário
Lista inserir(Lista, int;			//acrescenta item no inicio da lista
Lista inserirFimLista(Lista, int); //acrescenta item no fim da lista
Lista remover(Lista, Celula *);		//remove celula referenciada
Lista esvaziar(Lista);				//remove todos os itens da lista

void permutacaoJosephus(Lista, int, int);  //mostra na tela a permutação de Josephus

//implementação
Lista criarListaVazia(){
	
	return L;
}

bool verificarVazia(Lista L){
	bool vazia;
	
	return vazia;
}

void mostrarLista(Lista L){
	
}

Lista inserir(Lista L, int n){
	
	return L;
}

Lista inserirFimLista(Lista L, int n){
	
	return L;
}

Lista remover(Lista L, Celula * rem){
	
	return L;
}

Lista esvaziar(Lista L){
	
	return L;
}

void permutacaoJosephus(Lista L, int n, int m){  //n é o numero de pessoas no circulo e m é o passo da morte
	
	
}
