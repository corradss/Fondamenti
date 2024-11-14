#include <stdio.h>

void somma(int int1,int int2,int *risultato);

int main(){
    int n;
    int p;
    int risultato;

    scanf("%d %d", &n, &p);

    somma(n, p, &risultato);

    printf("%d\n", risultato);
}

void somma(int int1, int int2, int *risultato){
    *risultato = int1 + int2;
}