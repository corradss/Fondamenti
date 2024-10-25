#include <stdio.h>

int main(){
    int iva[11];
    char iva_s[200];
    int i;
    int valida;
    int tot_dis, tot_par, tot;

    tot_dis = 0;
    tot_par = 0;
    valida = 1;
    
    scanf("%s", iva_s);
    
    for (i = 0; iva_s[i] != '\0'; i++){
        iva[i] = (int)iva_s[i] - 48;
    }
    if (i != 11){valida = 0;}

    if (valida){
        for (i = 0; i < 11; i++){
            if (i % 2 == 0){
                tot_dis += iva[i];
            }else{
                tot_par += 2*iva[i];
            }
        }
        if (tot_par >= 10){
            tot_par = tot_par/10 + tot_par % 10;
        }
        tot = tot_par + tot_dis;
    }
    printf("%d\n", tot_dis);
    printf("%d\n", tot_par);
    printf("%d\n", tot);
    
}