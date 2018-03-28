typedef struct lista Lista;

// fun��o de cria��o da lista
Lista* criar_lista();

// fun��o que insere no in�cio da lista
Lista* inserir_lista(Lista* l, int i);

// fun�ao para imprimir os elementos 
void imprimir_lista(Lista* l);

// verifica se a lista esta vazia
int vazia(Lista* l);

// buscar elementos na lista
Lista* buscar(Lista* l, int v);

// remo��o de elementos da lista
Lista* remover(Lista* l, int v);

// libera a lista
void liberar(Lista* l);

// compara duas lista
int igual(Lista* l1, Lista* l2);