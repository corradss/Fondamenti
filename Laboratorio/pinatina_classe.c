#include <stdio.h>

int main(){
    int x, y;
    int n;
    int fila_at = 0;
    int j;

    printf("Insersci il numero di file x postazioni: ");
    scanf("%d x %d", &x, &y);

    printf("Insersci il numero di studenti: ");
    scanf("%d", &n);

  //  if (n <= float((2.0/3) * (x * y)))
    
    
    for (int i = 0; i < (x * y); i++){

        if (i % y == 0){
            fila_at++;
            if (fila_at % 2 == 0){
                printf("\n");
                for (j = 0; j < y; j++){
                    printf("O");
                }
                printf("\n");
                i = i + j;
            }
            else{printf("\n");}
            
        }
        if (n > 0){
            printf("X");
        }else {printf("O");}
        n--;
    

    }
    printf("\n");
}