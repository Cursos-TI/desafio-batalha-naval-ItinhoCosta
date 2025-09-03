#include <stdio.h>

int main() {
    printf("--- Desafio Batalha Naval - Nivel Aventureiro ---\n\n");
    printf("Tabuleiro 10x10 com 4 navios, incluindo diagonais.\n");
    
    // Matriz 10x10 para representar o tabuleiro.
    // O valor '0' indica que a posicao esta vazia.
    int tabuleiro[10][10] = {0}; 
    
    // --- Posicionamento dos Navios ---
    // Navio 1 (Vertical) de 3 partes, a partir de (1, 2)
    int navio1_x = 1;
    int navio1_y = 2;
    int navio1_tamanho = 3;
    for (int i = 0; i < navio1_tamanho; i++) {
        tabuleiro[navio1_x + i][navio1_y] = 3;
    }
    
    // Navio 2 (Horizontal) de 2 partes, a partir de (3, 0)
    int navio2_x = 3;
    int navio2_y = 0;
    int navio2_tamanho = 2;
    for (int i = 0; i < navio2_tamanho; i++) {
        tabuleiro[navio2_x][navio2_y + i] = 3;
    }
    
    // Novo Navio 3 (Diagonal) de 3 partes, a partir de (5, 5)
    int navio3_x = 5;
    int navio3_y = 5;
    int navio3_tamanho = 3;
    for (int i = 0; i < navio3_tamanho; i++) {
        tabuleiro[navio3_x + i][navio3_y + i] = 3;
    }
    
    // Novo Navio 4 (Diagonal) de 2 partes, a partir de (0, 8)
    int navio4_x = 0;
    int navio4_y = 8;
    int navio4_tamanho = 2;
    for (int i = 0; i < navio4_tamanho; i++) {
        tabuleiro[navio4_x + i][navio4_y - i] = 3;
    }

    // --- Exibicao do Tabuleiro Completo ---
    printf("\n--- Tabuleiro Completo ---\n\n");
    
    // Loop externo para percorrer as linhas da matriz (de 0 a 9)
    for (int i = 0; i < 10; i++) {
        // Loop interno para percorrer as colunas da matriz (de 0 a 9)
        for (int j = 0; j < 10; j++) {
            // Imprime o valor da posicao atual, seguido de um espaco
            printf("%d ", tabuleiro[i][j]);
        }
        // Quebra a linha para comecar a proxima linha do tabuleiro
        printf("\n");
    }
    
    printf("\nSimulacao de posicionamento concluida!\n");
    
    return 0;
}