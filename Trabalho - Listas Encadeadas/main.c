#include <stdio.h>
#include <stdio.h>
#include "lista.h"

int main(int argc, char *argv[])
{
	Lista* lista;
	lista = criar_lista();
	
	if(vazia(lista))
		printf("Lista vazia!\n");
	else
		printf("Lista NAO vazia!\n");
	
	lista = inserir_lista(lista, 10);
	lista = inserir_lista(lista, 20);
	lista = inserir_lista(lista, 5);
	
	imprimir_lista(lista);
	
	
	
	if(vazia(lista))
		printf("Lista vazia!\n");
	else
		printf("Lista NAO vazia!\n");
	
	
	
	int elemento = 10;
	if(buscar(lista, elemento) == NULL)
		printf("Nao encontrou o elemento %d\n");
	else
		printf("Encontrou o elemento %d\n", elemento);
		

	
	Lista* lista2;
	lista2 = criar_lista();
	lista = inserir_lista(lista2, 10);
	lista = inserir_lista(lista2, 20);
	lista = inserir_lista(lista2, 5);
	
	printf("iguais? %d\n", igual (lista, lista2));
	
	
	lista=remover(lista, 5);
	printf("impressao apos a remoca: \n");
	imprimir_lista(lista);
	liberar(lista);

	
	return 0;
}