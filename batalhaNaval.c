#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int posicionarNavio(int tabuleiro[10][10], int navio[3][2]) {
    // Primeiro verifica se todas as posições estão livres
    for (int i = 0; i < 3; i++) {
        int x = navio[i][0];
        int y = navio[i][1];

        if (x < 0 || x >= 10 || y < 0 || y >= 10) {
            return 0; // falhou, posição fora do tabuleiro
        }

        if (tabuleiro[x][y] != 0) {
            return 0; // falhou
        }
    }

    // Se estiver tudo livre, posiciona o navio
    for (int i = 0; i < 3; i++) {
        int x = navio[i][0];
        int y = navio[i][1];
        tabuleiro[x][y] = 3;
    }

    return 1; // sucesso
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; // Representação das linhas do tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com zeros
    int navio1[3][2] = {{3, 7}, {4, 7}, {5, 7}}; // Navio vertical (3 partes)
    int navio2[3][2] = {{1, 2}, {1, 3}, {1, 4}}; // Navio horizontal (3 partes)
    int navio3[3][2] = {{6, 1}, {7, 2}, {8, 3}}; // Navio diagonal (3 partes)
    int navio4[3][2] = {{0, 9}, {1, 8}, {2, 7}}; // Outro navio diagonal (3 partes)

    if (!posicionarNavio(tabuleiro, navio1))
        printf("Erro ao posicionar o navio 1!\n");

    if (!posicionarNavio(tabuleiro, navio2))
        printf("Erro ao posicionar o navio 2!\n");

    if (!posicionarNavio(tabuleiro, navio3))
        printf("Erro ao posicionar o navio 3!\n");

    if (!posicionarNavio(tabuleiro, navio4))
        printf("Erro ao posicionar o navio 4!\n");

    printf("Tabuleiro Inicial:\n \n");
    printf("    "); // Espaço para alinhar com os números das linhas
    for(int i = 0; i < 10; i++) {
      printf("%3c", linha[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("%2d |", i);
        
        for(int j = 0; j < 10; j++) {
            printf("%3d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
