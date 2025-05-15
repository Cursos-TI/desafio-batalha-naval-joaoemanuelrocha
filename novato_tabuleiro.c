#include <stdio.h>

int main() {

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];

    printf("Tabuleiro Batalha Naval \n");
    
    for (int j = 0; j < 10; j++) {
        printf("%2c ", letras[j]);
    }
    // Esse código e para colocar as letras de A até J

    printf("\n");

    for (int i = 0; i < 10; i++) {
        tabuleiro[i][0] = i + 1;  
        // O código acima foi feito para deixar a primeira coluna 1 a 10
        for (int j = 1; j < 10; j++) {
            tabuleiro[i][j] = 0;  
        // Esse código foi feita para deixar as demais colunas com 0
        }
    }

    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;
    // Esse código foi para colocar o valor 3 em determinadas linhas e colunas

    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;
    // A mesma coisa foi com esse código que foi para colocar o valor 3 em determinadas linhas e colunas

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Já esse aqui é o código que imprime o tabuleiro pro usuário

    return 0;
}