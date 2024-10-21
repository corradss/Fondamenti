#include <stdio.h>

#define C 4
#define R 5

int main(){
    int i, j, l, h;
    int num0, num1;
    int matrice[R][C] = {
        1, 0, 1, 1,
        0, 1, 1, 0, 
        1, 0, 0, 1,
        1, 1, 0, 1,
        1, 0, 0, 1,
    };
    int out_matrice[R][C];

    int mov_matr[3][3];

    for (i = 0; i < R; i++){
        for (j = 0; j < C; j++){
            num0 = 0;
            num1 = 0;
            for (l = -1; l < 2; l++){
                for (h = -1; h < 2; h++){
                    if (i + l >= 0 && i + l < R){ 
                        if (j + h >= 0 && j + h < C){
                            if (matrice[i + l][j + h]){num1++;}
                            else{num0++;}
                        }else{num0++;}
                    }else{num0++;}
                
                }
            
            }
            if (num0 > num1){out_matrice[i][j] = 0;}
            else{out_matrice[i][j] = 1;}
        }
    }


        

    for (int k = 0; k < R; k++){
        for (int u = 0; u < C; u++){
            printf("%d ", out_matrice[k][u]);
        }
        printf("\n");
    }

}
