/* Header Programa Problema Josephus
* Arquivo: LCDL_4.h
* Autores: Breno Góes do Amaral, Gabrielle Ramos da Silva,
		   Jolie Caldarone, Victor Barbosa Bulhões
* Data:    06/06/19  00:53
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
Lista inserir(Lista, int);			//acrescenta item no inicio da lista
Lista inserirFimLista(Lista, int); //acrescenta item no fim da lista
Lista remover(Lista, Celula *);		//remove celula referenciada
Lista esvaziar(Lista);				//remove todos os itens da lista

void permutacaoJosephus(Lista, int, int);  //mostra na tela a permutação de Josephus

//implementação
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
    Lista aux = L;
    if (L != NULL){
        while(aux != L->anterior){

            printf("%d ", aux->item);
            aux = aux->seguinte;
        }
        printf("%d\n", L->anterior->item);

    }
    else{
        printf("Lista Vazia");
    }
}

Lista inserir(Lista L, int n){
	Celula *novaCelula;
	novaCelula=(Celula*)malloc(sizeof(Celula));

	if(L == NULL){
		novaCelula->item = n;
		L = novaCelula;
		novaCelula->seguinte = L;
		novaCelula->anterior = L;

	}else{
        novaCelula->item = n;
        novaCelula->seguinte = L;
        novaCelula->anterior = L->anterior;
        L->anterior->seguinte = novaCelula;
        L->anterior = novaCelula;
        L = novaCelula;

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

    Celula * celulaSeguinte = rem->seguinte;
    Celula * celulaAnterior = rem->anterior;
    celulaSeguinte->anterior = celulaAnterior;
    celulaAnterior->seguinte = celulaSeguinte;
    free(rem);

	return L;
}

Lista esvaziar(Lista L){
	Celula * Aux;

	Aux = L->anterior;
	while(L != Aux){
		L = L->seguinte;
		free(L->anterior);
	}
	free(Aux);
	L = NULL;

	return L;
}

void permutacaoJosephus(Lista L, int n, int m){
//n é o numero de pessoas no circulo e m é o passo da morte
	Celula * perm;
	int tam = n, contador = -1, k = 1;
	int morto;

	perm = L;
	do{
		contador= contador + m;
		while(k <= contador){
			perm = perm->seguinte;
			k++;
		}
		morto = perm->item;
		printf("\n %d ", morto);
		L = remover(L, perm);
		tam --;

	}while(tam>1);

}

