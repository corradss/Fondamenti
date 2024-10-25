#include <stdio.h>

int main(){
    int a, b;
    int prodotto = 0;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    if (a < 0 && b < 0){
        for (int i = 0; i < -a; i++){
            prodotto = prodotto - b;
        }
    }
    if (a < 0 && b > 0){
        for (int i = 0; i < -a; i++){
            prodotto = prodotto + b;
        }
    }
    if ((a > 0 && b < 0) || (a > 0 && b > 0)){
        for (int i = 0; i < a; i++){
            prodotto = prodotto + b;
        }
    }
    if (a == 0 || b == 0){
        prodotto = 0;
    }
    

    printf("La prodotto è %d\n", prodotto);
}