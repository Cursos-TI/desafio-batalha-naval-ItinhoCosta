#include <stdio.h>

int main() {
    printf("--- Desafio Batalha Naval - Nivel Mestre ---\n\n");
    printf("Simulacao de Habilidades Especiais.\n\n");
    
    // As matrizes sao declaradas para representar as areas de efeito das habilidades.
    // O tamanho da matriz e 5x5 para facilitar a visualizacao dos padroes.
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};
    
    // --- Habilidade 1: Cone ---
    // A area de efeito se expande a partir de um ponto central.
    printf("--> Habilidade: Cone <--\n\n");
    printf("Areas afetadas (1) e nao afetadas (0):\n\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            // Logica para criar o padrao de cone.
            // A largura do cone aumenta a cada linha.
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            }
        }
    }
    
    // Exibicao da matriz do cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    
    // --- Habilidade 2: Cruz ---
    // A area de efeito forma uma cruz no centro da matriz.
    printf("\n--> Habilidade: Cruz <--\n\n");
    printf("Areas afetadas (1) e nao afetadas (0):\n\n");
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // A logica da cruz e: se estiver na linha central (i=2)
            // OU na coluna central (j=2), marca como 1.
            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            }
        }
    }
    
    // Exibicao da matriz da cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    
    // --- Habilidade 3: Octaedro ---
    // A area de efeito se expande e contrai, formando um losango ou octaedro.
    printf("\n--> Habilidade: Octaedro <--\n\n");
    printf("Areas afetadas (1) e nao afetadas (0):\n\n");
    
    // A logica do octaedro e uma combinacao de expansao e contracao
    // semelhante ao cone. Vamos criar um padrao mais simples aqui
    // para demonstrar o conceito.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 && j == 2) {
                octaedro[i][j] = 1;
            }
            if (i == 1 && (j >= 1 && j <= 3)) {
                octaedro[i][j] = 1;
            }
            if (i == 2 && j == 2) {
                octaedro[i][j] = 1;
            }
        }
    }
    
    // Exibicao da matriz do octaedro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSimulacao de habilidades concluida!\n");
    
    return 0;
}