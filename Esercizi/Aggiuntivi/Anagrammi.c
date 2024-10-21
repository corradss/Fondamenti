#include <stdio.h>
#include <string.h>

#define LEN_MAX 20

int main(){
    char str1[LEN_MAX];
    char str2[LEN_MAX];
    int anagramma;

    scanf("%s", str1);
    scanf("%s", str2);

    anagramma = 0;

    if(strlen(str1) == strlen(str2)){
        anagramma = 1;
        for (int i = 0; str1[i] != '\0' && anagramma; i++){
            for (int j = 0; str1[i] != str2[j]; j++){
                if (str2[j] == '\0'){
                    anagramma = 0;
                }
            }
        }
    }

    if (!anagramma){printf("Non sono un anagramma.\n");}
    else{printf("Le parole sono due anagrammi.\n");}
}