#include <stdio.h>

int main(){

    int a, b, c;
    int t;

    printf("Inserire il valore di a: ");
    scanf("%d", &a);

    printf("\nInserire il valore di b: ");
    scanf("%d", &b);

    printf("\nInserire il valore di c: ");
    scanf("%d", &c);

    // Adesso faccio lo shift 

    t = b;

    b = a;
    a = c;
    c = t;

    printf("\nIl valore di a è: %d\n", a);
    printf("\nIl valore di b è: %d\n", b);
    printf("\nIl valore di c è: %d\n", c);



    return 0;
}