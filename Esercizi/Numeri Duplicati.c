#include <stdio.h>
#define N 20
#define NUM_MAX 100
#define NUM_MIN 10

int main(){
    int arr [N];
    int i, j;
    int duplicato = 0;

    for (i = 0; i < N && duplicato == 0; i++){
        scanf("%d", &arr[i]);

        if (arr[i] >= NUM_MIN && arr[i] <= NUM_MAX){
            for (j = 0; j < i; j++){
                if (arr[i] == arr[j]){
                    duplicato = arr[i];
                }
            }
            
        }
        else{printf("Il numero non è compreso tra %d e %d.\n", NUM_MIN, NUM_MAX);i -= 1;}
        //if (duplicato == 1){printf("Il numero %d à già stato inserito.\n", arr[i]); duplicato = 0;}
    }
    printf("Il numero %d à già stato inserito.\n", duplicato);
}