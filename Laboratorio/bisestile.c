#include <stdio.h>

int main(){
    int anno;
    
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);

    if (anno >= 0){
        if (anno % 400 == 0){
            printf("L'anno %d è bisestile\n", anno);
        }
        else if ((anno % 4 == 0) && (anno % 100 != 0)){
            printf("L'anno %d è bisestile\n", anno);
        }
        else{
            printf("L'anno %d non è bisestile\n", anno);
        }
    }
    else{
        printf("Il formato dell'anno è sbagliato\n");
    }
}