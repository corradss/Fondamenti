#include <stdio.h>
#include <string.h>

#define PAROLA_MAX 50
#define MAX_LEN 255

typedef struct {
    char parola[PAROLA_MAX];
    int frequenza;
}frequenza_parola;

frequenza_parola freq_parola(char[]);


int main(){
    char frase[MAX_LEN + 1];
    char parole[50];
    char parola[PAROLA_MAX];
    int i, j;
    int ultima_parola;
    ultima_parola = 0;
    gets(frase);

    for (i = 0; i < MAX_LEN + 1; i++){
        for (j = 0; j < PAROLA_MAX; j++){
            if (frase[i] == ' '){
                
            }
        }
    }


    return 0;
}