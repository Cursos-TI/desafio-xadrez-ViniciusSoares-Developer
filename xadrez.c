#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int moveTorre = 5, moveBispo = 5, moveRainha = 8;
    
    /**
     * imprimi sempre que o moveRainha for maior que 0
     * após imprimir decrementa uma casa a se mover
     */
    printf("Movimentação do bispo\n");
    while (moveBispo > 0) {
        printf("Cima, Direita\n");
        moveBispo--;
    }
    
    /**
     * imprimi sempre que o moveRainha for maior que 0
     * após imprimir decrementa uma casa a se mover
     */
    printf("\nMovimentação da torre\n");
    while (moveTorre > 0) {
        printf("Direita\n");
        moveTorre--;
    }

    /**
     * imprimi sempre que o moveRainha for maior que 0
     * após imprimir decrementa uma casa a se mover
     */
    printf("\nMovimentação da rainha\n");
    while (moveRainha > 0) { //Verifica se 
        printf("Esquerda\n");
        moveRainha--;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    int cavaloHorizontal = 1, cavaloVertical = 2;
    for (int x = 0; x < cavaloHorizontal; x++) {
        for (int y = 0; y < cavaloVertical; y++) {
            printf("Baixo");
        }
        printf("Esquerda");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
