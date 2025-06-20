#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez:
 * Torre (5 casas para a direita) - usando for
 * Bispo (5 casas na diagonal para cima e à direita) - usando while
 * Rainha (8 casas para a esquerda) - usando do-while
 */

int main() {
    // ========================
    // MOVIMENTO DA TORRE
    // ========================
    // A torre move-se em linha reta (horizontal ou vertical).
    // Neste exemplo, ela se moverá 5 casas para a direita.

    printf("Movimento da Torre (FOR):\n");
    int casasTorre = 5;

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);  // Exibe cada movimento
    }

    printf("\n");

    // ========================
    // MOVIMENTO DO BISPO
    // ========================
    // O bispo move-se nas diagonais.
    // Neste exemplo, ele se moverá 5 casas na diagonal "cima e direita".

    printf("Movimento do Bispo (WHILE):\n");
    int casasBispo = 5;
    int i = 1;

    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    // ========================
    // MOVIMENTO DA RAINHA
    // ========================
    // A rainha move-se em todas as direções.
    // Neste exemplo, ela se moverá 8 casas para a esquerda.

    printf("Movimento da Rainha (DO-WHILE):\n");
    int casasRainha = 8;
    int j = 1;

    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n");

        // ========================
    // MOVIMENTO DO CAVALO
    // ========================
    // O Cavalo se move em "L": duas casas para baixo e uma casa para a esquerda.
    // Este movimento será implementado usando loops aninhados (FOR + WHILE).
    
    printf("Movimento do Cavalo (FOR + WHILE):\n");

    int movimentosBaixo = 2;    // Quantidade de casas para baixo
    int movimentosEsquerda = 1; // Quantidade de casas para a esquerda

    // Loop FOR para movimento para baixo (2 casas)
    for (int k = 1; k <= movimentosBaixo; k++) {
        printf("Baixo (%d)\n", k);

        // Dentro do FOR, vamos usar um WHILE para o movimento à esquerda
        // Só executará após os 2 movimentos para baixo serem completados
        if (k == movimentosBaixo) {
            int l = 1;
            while (l <= movimentosEsquerda) {
                printf("Esquerda (%d)\n", l);
                l++;
            }
        }
    }

    printf("\n");


    return 0;
}
