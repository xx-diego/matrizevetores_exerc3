#include <stdio.h>

int main() {
    int mat[3][3] = {{1, -1, 9},
                     {7, 14, -8},
                     {0, -5, -5}};

    int remat[3][3] = {{-1, 1, -9},
                      {-7, -14, 8},
                      {0, 5, 5}};

    int result[3][3];

    int eoposta = 1; //variavel que fiz pra validar se é oposta ou nao é tlgd?

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (remat[i][j] != 0) {
                result[i][j] = mat[i][j] / remat[i][j];
            } else {
               eoposta = 0;
                break;
            }
        }
        if (eoposta == 0) {
            break;
        }
    }

    if (eoposta) {
        printf("As matrizes nao sao opostas.\n");
    } else {
        printf("As matrizes sao opostas.\n");
    }

    return 0;
}