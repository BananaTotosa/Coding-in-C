/* 
Utilize duas estruturas de dados do tipo lista:
a. uma lista sequencial estática
b. uma lista dinâmica encadeada
2. Elabore uma estatística do tempo que as seguintes operações consomem de tempo:
a. inserção de N elementos no início da lista.
b. inserção de N elementos no final da lista.
c. consulta de N elementos da lista. A consulta deve ser feita pela posição (que deve ser gerada
aleatoriamente).

3. Realize a mensuração do tempo de cada tarefa de forma independente, por meio da função clock()
(exemplo da aula). Para facilitar a tarefa, considere sempre o mesmo elemento.
4. A tarefa deve ser realizada para diferentes valores de N (1000, 2000, 3000, ...). Para cada valor de N, salve
o tempo de execução para posterior análise.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"


#define N 1000 // Alterar o valor de N para ver o tempo de execução no inicio e na consulta da Lista
#define M 500000 // Alterar o valor de N para ver o tempo de execução no final da Lista


int main() {
    Lista* lista = criarLista();
    
    clock_t inicio, fim;
    unsigned long int tempo;
    
    // Exercício 2-a
    inicio = clock();
    for (int i = 0; i < N; i++) {
        inserirEm(lista, 0, i);
    }
    fim = clock();
    tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
    printf("tempo de execução no inicio: %lu milissegundo\n", tempo);
    
    liberarMemoria(lista);
    lista = criarLista();
    
    // Exercício 2-b
    inicio = clock();
    for (int i = 0; i < M; i++) {
        inserir(lista, i);
    }
    fim = clock();
    tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
    printf("tempo de execução no final: %lu milissegundos\n", tempo);
    
    // Exercício 2-c
    inicio = clock();
    for (int i = 0; i < N; i++) {
        int posicao = rand() % 10000;
        int resultado = buscar(lista, posicao);
    }
    fim = clock();
    tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
    printf("tempo de execução na consulta: %lu milissegundos\n", tempo);
    
    liberarMemoria(lista);
    
    return 0;
}
