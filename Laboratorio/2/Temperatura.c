#include <stdio.h>
#define ARCO_INDAGINE 2

int main(){
    float valori[ARCO_INDAGINE];
    int i, j, l;
    int differenza;
    float totale, media, max, min;

    totale = 0;
    max = 0;
    min = 100;

    for (i = 0; i < ARCO_INDAGINE; i++){
        printf("Inserisci la temperatura: ");
        scanf("%f", &valori[i]);
        totale += valori[i];
        if (valori[i] < min){min = valori[i];}
        if (valori[i] > max){max = valori[i];}
    }
    printf("GIORNO TEMPERATURA ISTOGRAMMA\n");
    for (j = 0; j < ARCO_INDAGINE; j++){
        printf("\t%d\t%0.2f ", j+1, valori[j]);
        differenza = valori[j] - 34;
        if (differenza > 0){
            for (l = 0; l < differenza; l++){
                printf("*");
            }
        }
        printf("\n");
    }
    media = totale/ARCO_INDAGINE;
    printf("Massimo: %.2f, Minimo: %.2f, Media: %.2f\n", max, min, media);
    return 0;
}