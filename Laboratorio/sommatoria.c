#include <stdio.h>

int main(){
    float y = 0;
    int r, q;

    printf("Inserisci q e r divisi da uno spazio: ");
    scanf("%d %d", &q, &r);
   

    if (q > 0 && r > q){
        for (int i = q; i <= r; i++){
            y = y + 1.0/i;
        }
        printf("%f\n", y);
    }
    else{
        printf("Hai inserito numeri errati\n");
    }
    
}