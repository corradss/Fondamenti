#include <stdio.h>
#define N 5

int main(){
    int arr[N];
    int somma;
    somma = 0;
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < N; j++){
        somma += arr[j];
    }
    printf("%d\n", somma);
}