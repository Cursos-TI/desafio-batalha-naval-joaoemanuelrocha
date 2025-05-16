#include <stdio.h>

int main() {

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];

    printf("Tabuleiro Batalha Naval \n");
    
    for (int j = 0; j < 10; j++) {
        printf("%2c ", letras[j] + 1);
    }
    // Esse código e para colocar as letras de A até J

    printf("\n");

    for (int i = 0; i < 10; i++) {
        tabuleiro[i][0] = i;
        // O código acima foi feito para deixar a primeira coluna 0 a 9
        for (int j = 1; j < 10; j++) {
            tabuleiro[i][j] = 0; 
        // Esse código foi feita para deixar as demais colunas com 0
        }
    }

for (int i = 6; i <= 7; i++) {
    for (int j = 8; j <= 8; j++) {
        tabuleiro[i][j] = 3;
    }
}
// Esse aqui é para deixa algums número 3 na vertical

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 10; j++) {
        if (i + j == 9) {
            tabuleiro[i][j] = 3;
        }
    }
}
// Esse código é para deixar o algums números 3 na diagonal

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Já esse aqui é o código que imprime o tabuleiro pro usuário

    return 0;
}