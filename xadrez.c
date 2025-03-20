#include <stdio.h>

int main() {
    // Declaração da variável de controle de loop
    int i;

    //Mover a torre 5x para a direita  utilizando for
    printf("Movimentação da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    //Mover o bispo 5 vezes para diagonal =(cima + direita) utilizando do-while
    printf("\nMovimentação do Bispo:\n");
    i = 0; // Reinicializa a variável de controle
    do {
        printf("Cima, Direita\n");
        i++; // Incrementa o contador para avançar no loop
    } while (i < 5); // Repete até que o Bispo tenha se movido 5 vezes

    //Mover a rainha 8x para a esquerda utilizando while
    printf("\nMovimentação da Rainha:\n");
    i = 0; // Reinicializa a variável de controle
    while (i < 8) {
        printf("Rainha andou para esquerda\n");
        i++; // Incrementa o contador para evitar um loop infinito
    }

    // Retorna 0 para indicar que o programa finalizou com sucesso
    return 0;
}
