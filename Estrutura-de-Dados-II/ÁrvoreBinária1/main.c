#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"
int main(){
    
    int opc;
    ArvBin* raiz = cria_ArvBin();
    
    printf("=== MENU ===\n");
    printf("1. Inserir um valor na árvore\n");
    printf("2. Verificar se a árvore está vazia\n");
    printf("3. Calcular a altura da árvore\n");
    printf("4. Contar total de nós\n");
    printf("5. Imprimir percuso em pré-ordem\n");
    printf("6. Imprimir percuso em ordem\n");
    printf("7. Imprimir percuso em pós-ordem\n");
    printf("0. Sair\n\n");
    
    printf("Escolha uma opção: ");
    scanf("%d", &opc);
    
    while(opc != 0) {
    switch (opc){
        case 1:
        int valor;
        printf("\nQual valor deseja inserir? ");
        scanf("%d", &valor);
        insere_ArvBin(raiz, valor);
        break;
        
        case 2:
        estaVazia_ArvBin(raiz);
        break;
        
        case 3:
        int altura = altura_ArvBin(raiz);
        printf("\nA altura da árvore é %d\n", altura);
        break;
        
        case 4:
        int total = totalNO_ArvBin(raiz);
        printf("\nO total de nós dessa árvore é %d\n", total);
        break;
        
        case 5:
        preOrdem_ArvBin(raiz);
        break;
        
        case 6:
        emOrdem_ArvBin(raiz);
        break;
        
        case 7:
        posOrdem_ArvBin(raiz);
        break;
        
        case 0:
        break;
        
        default:
        printf("\nOpção escolhida inválida!\n");
        break;
    }
    
    printf("\n=== MENU ===\n");
    printf("1. Inserir um valor na árvore\n");
    printf("2. Verificar se a árvore está vazia\n");
    printf("3. Calcular a altura da árvore\n");
    printf("4. Contar total de nós\n");
    printf("5. Imprimir percuso em pré-ordem\n");
    printf("6. Imprimir percuso em ordem\n");
    printf("7. Imprimir percuso em pós-ordem\n");
    printf("0. Sair\n\n");
    
    printf("Escolha uma opção: ");
    scanf("%d", &opc);
    
    }
    printf("\nSaindo do programa - Tenha um bom dia!\n");
    return 0;
}
