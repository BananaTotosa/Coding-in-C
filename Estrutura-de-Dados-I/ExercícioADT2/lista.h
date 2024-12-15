typedef struct lista Lista;

Lista* criarLista();
void inserir(Lista* lista, int valor);
int alterar(Lista* lista, int posicao, int valor);
int remover(Lista* lista, int posicao);
void imprimir(Lista* lista);
int quantidadeItens(Lista* lista);
int estaVazia(Lista* lista);
int buscar(Lista* lista, int valor);
void liberarMemoria(Lista* lista);
