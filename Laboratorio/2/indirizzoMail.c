#include <stdio.h>
#include <string.h>

int main(){
    char mail[100];
    int i;
    int chioc, punto;
    int valida;

    valida = 1;
    chioc = 0;
    punto = 0;
    printf("Inserisci la mail: ");
    scanf("%s", mail);

    for (i = 0; i < strlen(mail) && valida; i++){
        if (mail[i] == '@'){
            if(mail[i + 1] == '.' || i == 0 || i == (strlen(mail))-1){valida = 0;}
            chioc++;
        }
        if (mail[i] == '.'){
            if(i == 0 || i == (strlen(mail) - 1)){valida = 0;}
            if(chioc && mail[i - 1] != '@'){punto = 1;}
        }
    }
    if (punto && chioc == 1 && valida){valida = 1;}
    else{valida = 0;}
    
    if (valida){printf("Mail valida.\n");}
    else{printf("Ammazzati bastardo.\n");}
}