#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h" //inclui os Protótipos

/*
  Definição das Estruturas e Tipos
  struct NO: É a estrutura que define cada nó da árvore. Cada nó contém:

 - Um campo info que armazena o valor inteiro.
 - Dois ponteiros esq e dir que apontam para os filhos à esquerda e à direita, respectivamente.
 - typedef struct NO* ArvBin: Cria um novo tipo ArvBin que é um ponteiro para struct NO. Este é o tipo que você usa para manipular a árvore binária.
*/

struct NO{
    int info;
    struct NO *esq;
    struct NO *dir;
};

/*
  Funções de Manipulação da Árvore
  ArvBin* cria_ArvBin():
  - Aloca memória para um ponteiro raiz da árvore binária e inicializa esse ponteiro com NULL.
    Retorna um ponteiro para o ponteiro raiz.
*/

ArvBin* cria_ArvBin(){
    ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if(raiz != NULL)
        *raiz = NULL;
    return raiz;
}


void libera_NO(struct NO* no){
    if(no == NULL)
        return;
    libera_NO(no->esq);
    libera_NO(no->dir);
    free(no);
    no = NULL;
}


/*
  void libera_ArvBin(ArvBin* raiz):
  - Libera a memória alocada para a árvore, chamando recursivamente libera_NO
    para liberar todos os nós da árvore e, em seguida, libera a própria raiz.
*/

void libera_ArvBin(ArvBin* raiz){
    if(raiz == NULL)
        return;
    libera_NO(*raiz);//libera cada nó
    free(raiz);//libera a raiz
}

/*
  int insere_ArvBin(ArvBin* raiz, int valor):
  - Insere um novo nó na árvore binária com um valor específico.
  - Se a árvore estiver vazia, o novo nó torna-se a raiz.
  - Caso contrário, o código percorre a árvore para encontrar o local
    apropriado para inserir o novo nó, mantendo a propriedade de árvore binária de busca.
*/

int insere_ArvBin(ArvBin* raiz, int valor){
    if(raiz == NULL)
        return 0;
    struct NO* novo;
    novo = (struct NO*) malloc(sizeof(struct NO));
    if(novo == NULL)
        return 0;
    novo->info = valor;
    novo->dir = NULL;
    novo->esq = NULL;

    if(*raiz == NULL)
        *raiz = novo;
    else{
        struct NO* atual = *raiz;
        struct NO* ant = NULL;
        while(atual != NULL){
            ant = atual;
            if(valor == atual->info){
                free(novo);
                printf("\nO elemento %d já existe\n", valor);
                return 0;//elemento já existe
            }

            if(valor > atual->info)
                atual = atual->dir;
            else
                atual = atual->esq;
        }
        if(valor > ant->info)
            ant->dir = novo;
        else
            ant->esq = novo;
    }
    printf("\nValor %d inserido\n", valor);
    return 1;
}


/*
  int estaVazia_ArvBin(ArvBin* raiz):
  - Retorna 1 se a árvore estiver vazia (raiz NULL), caso contrário, retorna 0.
*/

int estaVazia_ArvBin(ArvBin *raiz){
    if(raiz == NULL){
        printf("\nA árvore está vazia!\n");
        return 1;
    } else if(*raiz == NULL){
        printf("\nA árvore está vazia!\n");
        return 1;
    } else {
    printf("\nA árvore não está vazia!\n");
    return 0;
    }
}


/*
  int totalNO_ArvBin(ArvBin* raiz):
  - Calcula o número total de nós na árvore recursivamente.
*/

int totalNO_ArvBin(ArvBin *raiz){
    if (raiz == NULL)
        return 0;
    if (*raiz == NULL)
        return 0;
    int alt_esq = totalNO_ArvBin(&((*raiz)->esq));
    int alt_dir = totalNO_ArvBin(&((*raiz)->dir));
    return(alt_esq + alt_dir + 1);
}


/*
  int altura_ArvBin(ArvBin* raiz):
  - Calcula a altura da árvore recursivamente,
    que é a maior profundidade de qualquer nó na árvore.
*/

int altura_ArvBin(ArvBin *raiz){
    if (raiz == NULL)
        return 0;
    if (*raiz == NULL)
        return 0;
    int alt_esq = altura_ArvBin(&((*raiz)->esq));
    int alt_dir = altura_ArvBin(&((*raiz)->dir));
    if (alt_esq > alt_dir){
        return (alt_esq + 1);
        printf("%d", alt_esq + 1);
    }    
    else{
        return(alt_dir + 1);
        printf("%d", alt_dir + 1);
    }
}

void preOrdem_ArvBin(ArvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        printf("\n%d\n",(*raiz)->info);
        preOrdem_ArvBin(&((*raiz)->esq));
        preOrdem_ArvBin(&((*raiz)->dir));
    }
}

void emOrdem_ArvBin(ArvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        emOrdem_ArvBin(&((*raiz)->esq));
        printf("\n%d\n",(*raiz)->info);
        emOrdem_ArvBin(&((*raiz)->dir));
    }
}

void posOrdem_ArvBin(ArvBin *raiz){
    if(raiz == NULL)
        return;
    if(*raiz != NULL){
        posOrdem_ArvBin(&((*raiz)->esq));
        posOrdem_ArvBin(&((*raiz)->dir));
        printf("\n%d\n",(*raiz)->info);
    }
}


