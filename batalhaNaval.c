#include <stdio.h>

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10]) {
    // Exibe a primeira linha com letras de A a J
    printf("   A B C D E F G H I J\n");
    
    // Exibe o tabuleiro com números na primeira coluna
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  // Exibe o número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar um navio horizontalmente
void posicionarNavioHorizontal(int tabuleiro[10][10], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha][coluna + i] = 3; // Marca as posições do navio com 3
    }
}

// Função para posicionar um navio verticalmente
void posicionarNavioVertical(int tabuleiro[10][10], int linha, int coluna, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha + i][coluna] = 3; // Marca as posições do navio com 3
    }
}

int main() {
    // Inicializa o tabuleiro 10x10 com 0s (representando água)
    int tabuleiro[10][10] = {0};

    // Coordenadas iniciais dos navios
    int linhaNavio1 = 2, colunaNavio1 = 3; // Para o navio horizontal
    int linhaNavio2 = 5, colunaNavio2 = 6; // Para o navio vertical

    // Posiciona os navios no tabuleiro
    posicionarNavioHorizontal(tabuleiro, linhaNavio1, colunaNavio1, 3); // Navio horizontal com 3 posições
    posicionarNavioVertical(tabuleiro, linhaNavio2, colunaNavio2, 3);   // Navio vertical com 3 posições

    // Exibe o tabuleiro no console
    printf("Tabuleiro de Batalha Naval:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}