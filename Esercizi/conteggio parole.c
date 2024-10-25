#include <stdio.h>
#include <string.h>

#define N_FRASI_MAX 7
#define LEN_MAX_FRASE 200

int main(){
    char testo[N_FRASI_MAX][LEN_MAX_FRASE];
    int spazi[N_FRASI_MAX] = {0};
    int parole_tot;
    float media;
    parole_tot = 0;
    
    for (int i = 0; i < N_FRASI_MAX; i++){
        printf("Inserisci la frase.\n");
        gets(testo[i]);
    }
    for (int k = 0; k < N_FRASI_MAX; k++){
        for (int l = 0; l < LEN_MAX_FRASE && testo[k][l] != '\0'; l++){
            if (testo[k][l] == ' '){spazi[k]++;}
        }
        parole_tot += spazi[k] + 1;
    }
    media = (float)parole_tot / N_FRASI_MAX;
    printf("\n");
    for (int j = 0; j < N_FRASI_MAX; j++){
        if ((spazi[j] + 1) > media){
            printf("%s\n", testo[j]);
        }
    }
    printf("%.2f\n", media);
}