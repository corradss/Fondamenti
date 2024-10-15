#include <stdio.h>

#define N 20

int main(){
    int arr[N];
    int num;
    int i, j;
    int presente, trovato;

    presente = 0;
    trovato = 0;

    for (i = 0; i < N; i++){
        printf("Inserisci il numero: ");
        scanf("%d", &num);
        
        for (j = 0, trovato = 0; j < i && !trovato; j++){
            if (arr[j] == num){
                presente = 1;
                trovato = 1;
            }
        }
        if (!presente){
            arr[i] = num;
        }else{
            printf("Il numero era gà presente\n");
            presente = 0;
            i--;
        }
        
    }
    for (int l = 0; l < N; l++){
        printf("%d ", arr[l]);
    }
}