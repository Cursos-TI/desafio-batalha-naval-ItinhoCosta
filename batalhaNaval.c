#include <stdio.h>

int main() {
    printf("--- Desafio Batalha Naval - Nivel Novato ---\n\n");
    printf("Posicionamento de navios em tabuleiro 5x5\n");
    
    // Matriz 5x5 para representar o tabuleiro.
    // O valor '0' indica que a posicao esta vazia.
    int tabuleiro[5][5] = {0}; 
    
    // --- Posicionamento do Navio 1 (Vertical) ---
    // O navio de 3 partes comeca na coordenada (1, 2) e vai para baixo.
    int navio1_x = 1;
    int navio1_y = 2;
    int navio1_tamanho = 3;

    printf("\n--> Posicionando Navio 1 (Vertical) <--\n\n");
    printf("As coordenadas do Navio 1 sao:\n\n");
    
    // Loop para percorrer o comprimento do navio
    for (int i = 0; i < navio1_tamanho; i++) {
        // Marcamos a posicao do navio na matriz com o valor 3
        tabuleiro[navio1_x + i][navio1_y] = 3;
        // Exibimos as coordenadas (X, Y) do navio
        printf("(%d, %d)\n", navio1_x + i, navio1_y);
    }
    
    // --- Posicionamento do Navio 2 (Horizontal) ---
    // O navio de 2 partes comeca na coordenada (3, 0) e vai para a direita.
    int navio2_x = 3;
    int navio2_y = 0;
    int navio2_tamanho = 2;

    printf("\n--> Posicionando Navio 2 (Horizontal) <--\n\n");
    printf("As coordenadas do Navio 2 sao:\n\n");
    
    // Loop para percorrer o comprimento do navio
    for (int i = 0; i < navio2_tamanho; i++) {
        // Marcamos a posicao do navio na matriz com o valor 3
        tabuleiro[navio2_x][navio2_y + i] = 3;
        // Exibimos as coordenadas (X, Y) do navio
        printf("(%d, %d)\n", navio2_x, navio2_y + i);
    }
    
    printf("\n--- Posicionamento concluido! ---\n");
    
    return 0;
}