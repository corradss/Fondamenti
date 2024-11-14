#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int master[4];
    int guess[4];
    char risultato[4];
    int tentativo;
    int j, k, l, m;
    int fine;
    int vittoria;

    srand(time(NULL));

    for (int i = 0; i < 4; i++){
        master[i] = rand() % 10;
    }
    printf("\n");
    for (tentativo; tentativo < 10 && !vittoria; tentativo++){
        scanf("%d %d %d %d", &guess[0], &guess[1], &guess[2], &guess[3]);
        for (j = 0; j < 4; j++){
            risultato[j] = 1; 
        }
        for (k = 0; k < 4; k++){
            fine = 0;
            for (l = 0; l < 4 && !fine; l++){
                if (guess[k] == master[l] && k == l){risultato[k] = '0';}
                if (guess[k] == master[l] && k != l && risultato[k] != '0'){risultato[k] = '+';}

                if (risultato[k] != '0' && risultato[k] != '+'){risultato[k] = '-';}
                
            }
        }
        vittoria = 1;
        for (m = 0; m < 4; m++){
            printf("%c ", risultato[m]);
            if (risultato[m] != '0'){vittoria = 0;}
        }
        printf("\n");
    }
    if (vittoria){printf("Hai vinto in %d tentativi!\n", tentativo);}
    else{printf("Hai perso.\n");}
}