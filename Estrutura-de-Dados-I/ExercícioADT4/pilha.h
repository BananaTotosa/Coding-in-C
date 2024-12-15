typedef struct pilha Pilha;

Pilha* criarPilha(int tamanho);
void liberarMemoria(Pilha* pilha);
void empilhar(Pilha* pilha, int valor);
int pegar(Pilha* pilha);
int ver(Pilha* pilha, int indice);
int verEmCima(Pilha* pilha);
int estaVazia(Pilha* pilha);
int estaCheia(Pilha* pilha);
