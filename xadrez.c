#include <stdio.h>

/*
 * Desafio Nível Mestre – Xadrez com Recursividade e Loops Complexos
 * Movimentos:
 * - Torre: Recursivo (direita)
 * - Bispo: Recursivo + Loops aninhados (diagonal cima-direita)
 * - Rainha: Recursivo (esquerda)
 * - Cavalo: Loop aninhado com múltiplas condições (duas casas cima, uma direita)
 */

// ==========================
// Função Recursiva: Torre
// ==========================
void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1);
}

// ==========================
// Função Recursiva + Loop Aninhado: Bispo
// ==========================
void moverBispoRecursivo(int linha, int max) {
    if (linha > max) return;

    for (int coluna = 1; coluna <= max; coluna++) {
        if (linha == coluna) {
            printf("Cima, Direita (%d,%d)\n", linha, coluna);
        }
    }

    moverBispoRecursivo(linha + 1, max);
}

// ==========================
// Função Recursiva: Rainha
// ==========================
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1);
}

// ==========================
// Loop Complexo: Cavalo (duas casas para cima, uma para a direita)
// ==========================
void moverCavalo() {
    printf("Movimento do Cavalo (Loops Complexos):\n");
    
    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 1, cima = 0; i <= 3; i++) {
        if (cima < movimentosCima) {
            printf("Cima (%d)\n", cima + 1);
            cima++;
            continue;  // Vai para o próximo passo até subir duas casas
        }

        for (int j = 1; j <= movimentosDireita; j++) {
            printf("Direita (%d)\n", j);
            break;  // Move apenas uma vez para a direita após as duas para cima
        }

        break; // Encerra o movimento completo do Cavalo
    }

    printf("\n");
}

int main() {
    // ========================
    // MOVIMENTO DA TORRE
    // ========================
    printf("Movimento da Torre (Recursivo):\n");
    int casasTorre = 5;
    moverTorre(casasTorre, 1);
    printf("\n");

    // ========================
    // MOVIMENTO DO BISPO
    // ========================
    printf("Movimento do Bispo (Recursivo + Loops Aninhados):\n");
    int casasBispo = 5;
    moverBispoRecursivo(1, casasBispo);
    printf("\n");

    // ========================
    // MOVIMENTO DA RAINHA
    // ========================
    printf("Movimento da Rainha (Recursivo):\n");
    int casasRainha = 8;
    moverRainha(casasRainha, 1);
    printf("\n");

    // ========================
    // MOVIMENTO DO CAVALO
    // ========================
    moverCavalo();

    return 0;
}
 