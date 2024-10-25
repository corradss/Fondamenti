#include <stdio.h>

#define N 3

int main(){
    int mat1[N][N] = {
        3, 1, 5, 
        5, 3, 6, 
        8, 4, 4
    };
    int mat2[N][N];
    int i, j, l, m, n;
    int it_arr;
    int dispari[N*N];

    it_arr = 0;

    for (i = 0; i < N*N; i++){
        dispari[i] = 0;
    }

    for (j = 0; j < N; j++){
        for (l = 0; l < N; l++){
            if (mat1[j][l] % 2 == 1){
                dispari[it_arr] = mat1[j][l];
                it_arr++;
            }
        }
    }
    it_arr = 0;
    for (m = 0; m < N; m++){
        for (n = 0; n < N; n++){
            mat2[m][n] = dispari[it_arr];
            it_arr++;
        }
    }

    for (int k = 0; k < N; k++){
        for (int g = 0; g < N; g++){
            printf("%d ", mat2[k][g]);
        }
        printf("\n");
    }
}