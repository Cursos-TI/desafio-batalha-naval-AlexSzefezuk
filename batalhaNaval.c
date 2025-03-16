#include <stdio.h>

void imprimeTabuleiro(int tabuleiro[10][10]) {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf(" %c", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", linhas[i]);
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return;
};

void posicionaNavioHorizontal(int tabuleiro[10][10], int posicaoColuna, int posicaoLinha) {
    for (int i = posicaoColuna; i < posicaoColuna + 3; i++) {
        tabuleiro[posicaoLinha][i] = 3;
    }
    return;
}

void posicionaNavioVertical(int tabuleiro[10][10], int posicaoColuna, int posicaoLinha) {
    for (int i = posicaoLinha; i < posicaoLinha + 3; i++) {
        tabuleiro[i][posicaoColuna] = 3;
    }
    
    return;
}

int main() {
    int tabuleiro[10][10];

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("Batalha Naval\n");
    printf("Tabuleiro:\n");

    posicionaNavioHorizontal(tabuleiro, 2, 3);
    posicionaNavioVertical(tabuleiro, 3, 5);

    imprimeTabuleiro(tabuleiro);

    return 0;
}
