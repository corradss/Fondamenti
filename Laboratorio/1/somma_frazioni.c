#include <stdio.h>

int main(){
    int a1, b1, a2, b2;
    int den_c, num_c;

    printf("Inserisci la prima frazione del tipo a/b: ");
    scanf("%d/%d", &a1, &b1);

    printf("Inserisci la seconda frazione del tipo a/b: ");
    scanf("%d/%d", &a2, &b2);

    den_c = b1 * b2;
    num_c = a1*b2 + a2*b1;

    printf("La somma della frazioni è %d/%d.\n", num_c, den_c);

    return 0;    
}