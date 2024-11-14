#include <stdio.h>

#define MAX 3

int main(){
    int arr[MAX];
    int* p;

    p = arr;

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    for (int i = 0; i < MAX; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int j = 0; j < MAX; j++){
        printf("%d ", *(p + j));
    }
    

}