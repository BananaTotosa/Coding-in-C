typedef struct fila Fila;

Fila* criarFila(int tamanho);
void enfileirar(Fila* fila, int valor);
int desenfileirar(Fila* fila);
int quantidadeItens(Fila* fila);
int primeiro(Fila* fila);
int ultimo(Fila* fila);
int estaVazia(Fila* fila);
int estaCheia(Fila* fila);
void liberarMemoria(Fila* fila);
