// scrivere un programma che dato un numero primo stampi se è primo o meno
#include <stdio.h>
#include <math.h>

int main(){
    int num;
    int divisore;
    int primo;

    printf("Inserisci il numero: ");
    scanf("%d", &num);

    primo = 1;

    for (divisore = 2; divisore < sqrt((float)num); divisore++){
        if (num % divisore == 0){primo = 0;}
    }

    if (primo){printf("Il numero è primo.\n");}
    else{printf("Il numero non è primo.\n");}
}