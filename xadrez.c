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

    return 0;
}
