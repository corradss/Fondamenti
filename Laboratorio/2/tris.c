#include <stdio.h>

int main(){
    int campo[3][3] = {
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
    };
    int i, j, l, m;
    int colonna, riga;
    int giocatore;
    int vittoria, libero;
    giocatore = 1;

    vittoria = 0;

    while (!vittoria){
        libero = 0;
        scanf("%d %d", &riga, &colonna);

        if (campo[riga][colonna] == 0){
            if (giocatore % 2 == 1){
                campo[riga][colonna] = 1;
            }
            else{campo[riga][colonna] = 2;}
        }

        for (l = 0; l < 3; l++){
            if (campo[l][0] == 1 && campo[l][1] == 1 && campo[l][2] == 1){
                vittoria = 1;
            }
            if (campo[0][l] == 1 && campo[1][l] == 1 && campo[2][l] == 1){
                vittoria = 1;
            }
        }
        if (campo[0][0] == 1){
            if (campo[1][1] == 1 && campo[2][2] == 1){vittoria = 1;}
        }
        if (campo[0][2] == 1){
            if (campo[1][1] == 1 && campo[2][0] == 1){vittoria = 1;}
        }

        for (l = 0; l < 3; l++){
            if (campo[l][0] == 2 && campo[l][1] == 2 && campo[l][2] == 2){
                vittoria = 2;
            }
            if (campo[0][l] == 2 && campo[1][l] == 2 && campo[2][l] == 2){
                vittoria = 2;
            }
        }
        if (campo[0][0] == 2){
            if (campo[1][1] == 2 && campo[2][2] == 2){vittoria = 2;}
        }
        if (campo[0][2] == 2){
            if (campo[1][1] == 2 && campo[2][0] == 2){vittoria = 2;}
        }

        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                printf("%d ", campo[i][j]);
                if (campo[i][j] == 0){libero = 1;}
            }
            printf("\n");
        }

        if (!libero){vittoria = -1;}
        giocatore++;
    }

    if (vittoria == -1){
        printf("Pareggio!\n");
    }
    else{printf("Ha vinto il giocatore %d!\n", vittoria);}

}