typedef struct lista Lista;

// função de criação da lista
Lista* criar_lista();

// função que insere no início da lista
Lista* inserir_lista(Lista* l, int i);

// funçao para imprimir os elementos 
void imprimir_lista(Lista* l);

// verifica se a lista esta vazia
int vazia(Lista* l);

// buscar elementos na lista
Lista* buscar(Lista* l, int v);

// remoção de elementos da lista
Lista* remover(Lista* l, int v);

// libera a lista
void liberar(Lista* l);

// compara duas lista
int igual(Lista* l1, Lista* l2);