#include <stdio.h>

/**
 * Move o bispo uma quantidade X definida pelo parametro casasParaMover
 * 
 * Caso o casasParaMover continue sendo maior que 0 ele continuara chamando
 * a função e pre decrementando -1 do parametro que passa para a proxima chamada.
 * (Não utilizar pós decremento porque isso causa um stack overflow de estar
 *  passando a variavel com o mesmo valor e só decrementar depois de chamar a função)
 * 
 * Caso o casasParaMover seja maior que 0 ele demonstra em qual direção o bispo esta se movendo
 * por meio de um loop aninhado representando o eixo Y e X do tabuleiro
 */
int movementBispo(int casasParaMover) {
    if (casasParaMover > 0) {
        for (int y = 1; y > 0; y--) {
            printf("Cima\t");
            for (int x = 1; x > 0; x--) {
                printf("Direita\n");
            }
        }
        movementBispo(--casasParaMover);
    }
}


/**
 * Move a torre uma quantidade X definida pelo parametro casasParaMover
 * 
 * Caso o casasParaMover continue sendo maior que 0 ele continuara chamando
 * a função e pre decrementando -1 do parametro que passa para a proxima chamada
 * (Não utilizar pós decremento porque isso causa um stack overflow de estar
 *  passando a variavel com o mesmo valor e só decrementar depois de chamar a função)
 */
int movementTorre(int casasParaMover) {
    if (casasParaMover > 0) {
        printf("Direita\n");
        movementTorre(--casasParaMover);
    }
}

/**
 * Move a rainha uma quantidade X definida pelo parametro casasParaMover
 * 
 * Caso o casasParaMover continue sendo maior que 0 ele continuara chamando
 * a função e pre decrementando -1 do parametro que passa para a proxima chamada
 * (Não utilizar pós decremento porque isso causa um stack overflow de estar
 *  passando a variavel com o mesmo valor e só decrementar depois de chamar a função)
 */
int movementRainha(int casasParaMover) {
    if (casasParaMover > 0) {
        printf("Esquerda\n");
        movementRainha(--casasParaMover);
    }
}

/**
 * Realiza o movimento do cavalo utilizando de loop complexo
 * 
 * Y -> representa o eixo horizontal (Recebe o valor do parametro eixoY)
 * X -> representa o eixo vertical   (Recebe o valor do parametro eixoX)
 */
int movementCavalo(char eixoY, char eixoX) {
    for (int y = eixoY, x = eixoX; y > 0 && x > 0; y--) {
        printf("Cima\t");
        if (y > 1) continue;
        printf("Direita\n");
        x--;
    }
}

int main() {
    // Variaveis indicando quanto cada peça irá andar
    // obs: cavalo é necessario com que tenha o valor dos 2 eixos para mover em L
    int moveTorre = 5, moveBispo = 5, moveRainha = 8, moveCavaloY = 2, moveCavaloX = 1;
    
    /**
     * Chama a função recursiva para mover o bispo passando
     * a quantidade de casas em que ele irá se mover
     */
    printf("Movimentação do bispo\n");
    movementBispo(moveBispo);
    
    /**
     * Chama a função recursiva para mover a torre passando
     * a quantidade de casas em que ele irá se mover
     */
    printf("\nMovimentação da torre\n");
    movementTorre(moveTorre);

    /**
     * Chama a função recursiva para mover a rainha passando
     * a quantidade de casas em que ele irá se mover
     */
    printf("\nMovimentação da rainha\n");
    movementRainha(moveRainha);

    /**
     * Chama a função para mover o cavalo passando a quantidade
     * de casas dos eixos x e y em que ele irá se mover
     */
    printf("\nMovimento do cavalo\n");
    movementCavalo(moveCavaloY, moveCavaloX);

    return 0;
}
