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
#include "Booleano"


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
Lista inserir(Lista, int;			//acrescenta item no inicio da lista
Lista inserirFimLista(Lista, int); //acrescenta item no fim da lista
Lista remover(Lista, Celula *);		//remove celula referenciada
Lista esvaziar(Lista);				//remove todos os itens da lista

void permutacaoJosephus(Lista, int, int);  //mostra na tela a permuta��o de Josephus

//implementa��o
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

void permutacaoJosephus(Lista L, int n, int m){  //n � o numero de pessoas no circulo e m � o passo da morte
	
	
}
