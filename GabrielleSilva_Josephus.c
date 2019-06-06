/* Programa Problema Josephus
* Arquivo: GabrielleSilva_Josephus.c
* Autores: Breno Góes do Amaral, Gabrielle Ramos da Silva,
		   Jolie Caldarone, Victor Barbosa Bulhões
* Data:    05/06/19  00:53
* Descrição: Arquivo source com função principal e função Lista construtora para
             construção de uma lista com n números acessando somente a interface.
*/

#include "LCDL_4.h"

//interface
Lista construtoraN(int);				   //constroi uma lista com n números

//principal
void main(){
	Lista A;
	int pessoas = 10, morte = 3;

	A = construtoraN(10);
	mostrarLista(A);
	permutacaoJosephus(A, pessoas, morte);
}

//implementação
Lista construtoraN(int n){
	int i;
	Lista L;
	L = criarListaVazia();

	for(i = 0; i < n; i++){
        L = inserir(L, i+1);
	}
	return L;
}
