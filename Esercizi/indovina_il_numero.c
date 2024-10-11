#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int valore, guess, tentativi;

    srand(time(NULL));
    valore = 1 + rand() % 99;

    printf("Indovina il numero: ");
    scanf("%d", &guess);

    tentativi = 1;

    while (guess != valore){
        if (guess == -1){printf("Ti sei arreso.\n"); return 0;}

        if (guess > valore){printf("Il numero è troppo alto.\n");}
        if (guess < valore){printf("Il numero è troppo basso.\n");}

        printf("Indovina il numero: ");
        scanf("%d", &guess);

        tentativi++;
    }
    printf("Hai indovinato in %d tentativi.\n", tentativi);
}