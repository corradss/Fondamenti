// scrivere un programma per calcolare il max e il min di N numeri

#include <stdio.h>

int main(){
    int max, min;
    int n;
    int num;
    int i;

    printf("Inserisci il numero della sequenza: ");
    scanf("%d", &n);

    printf("Inserisci il numero: ");
    scanf("%d", &num);

    max = num;
    min = num;

    for (i = 0; i < (n - 1); i++){
        if (num < min){min = num;}
        if (num > max){max = num;}

        printf("Inserisci il numero: ");
        scanf("%d", &num);
    }

    printf("max: %d\nmin: %d\n", max, min);
    
    return 0;
}