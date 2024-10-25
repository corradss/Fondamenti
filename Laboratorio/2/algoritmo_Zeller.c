#include <stdio.h>

int main(){
    int q, m, K, J;
    int h;
    int i;

    printf("Inserisci la data nel formato GG/MM/AAAA: ");
    scanf("%d/%d/%2d%2d", &q, &m, &J, &K);
    
    if (m == 1 || m == 2){
        m += 12; 
        J--;
        if (J < 0){K = 19; J = 99;}
    }
    h = (q + (((13*(m + 1))/5) + K + (K/4) + (J/4) + 5*J)) % 7;
    printf("%d\n", h);
    
}