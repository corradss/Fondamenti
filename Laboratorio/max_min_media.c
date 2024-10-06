#include <stdio.h>

int main(){
    int max = 0, min = 0, tot = 0, cont = 0;
    int num;
    float media;

    printf("Inserisci il numero: ");
    scanf("%d", &num);

    while (num > 0){
        if (num > max) {max = num;}
        if (num < min) {min = num;}
        tot += num;
        cont++;

        printf("Inserisci il numero: ");
        scanf("%d", &num);
    }
    
    if (cont == 0){
        printf("La sequenza inserita è nulla\n");
    }
    else{
        media = (float)tot / cont;
        printf("Massimo: %d\n", max);
        printf("Minimo: %d\n", min);
        printf("Media: %.2f\n", media);
    }
}