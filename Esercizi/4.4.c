// scrivere un programma per calcolare il max e il min di N numeri

#include <stdio.h>

int main(){
    float max, min;
    int n;
    float num;
    int i;

    printf("Inserisci il numero della sequenza: ");
    scanf("%d", &n);

    if (n > 0){
        printf("Inserisci il numero: ");
        scanf("%f", &num);

        max = num;
        min = num;

        for (i = 0; i < (n - 1); i++){
            if (num < min){min = num;}
            if (num > max){max = num;}

            printf("Inserisci il numero: ");
            scanf("%f", &num);
        }

        printf("max: %g\nmin: %g\n", max, min);
    }else{
        printf("Hai introdotto un n non valido.\n");
    }

    

    return 0;
}