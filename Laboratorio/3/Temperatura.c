#include <stdio.h>

#define ARCO_INDAGINE 7

int main(){
    float misure[ARCO_INDAGINE];
    int differenza[ARCO_INDAGINE];
    int differenza_max;
    int i, giorno_max;

    differenza_max = 0;
    giorno_max = -1;

    for (i = 0; i < ARCO_INDAGINE; i++){
        scanf("%f", &misure[i]);
    }
    for (int n = 0; n < ARCO_INDAGINE; n++){
        if (differenza_max < ((int)misure[n] - 34)){differenza_max = (int)misure[n] - 34; giorno_max = n;}
    }

    for (int k = 0; k < ARCO_INDAGINE; k++){
        differenza[k] = misure[k] - 34;
    }
    for (int j = 0; j < differenza_max; j++){
        for (int l = 0; l < ARCO_INDAGINE; l++){
            if (differenza[l] >= differenza_max - j){printf("*");}
            printf("\t");
        }
        printf("\n");
    }
    for(int m = 0; m < ARCO_INDAGINE; m++){
        printf("%g\t", misure[m]);
    }
    printf("\n");
}