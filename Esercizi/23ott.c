#include <stdio.h>
#include <string.h>

#define N_STUDENTI 3
#define N_VOTI 2

typedef struct d{
    int giorno;
    int mese;
    int anno;
}Data;

typedef struct s{
    char nome[20];
    char cognome[20];
    Data data; 
}Stud;

typedef struct {
    Data data;
    int valutazione;
}Voto;

typedef struct r{
    Stud studente;
    Voto voto[N_VOTI];
}Registro;

int main(){
    Registro registro[N_STUDENTI];
    int operazione;
    char cognome[20];
    float media;
    int trovato;
    media = 0;

    printf("Scrivi il nome e il cognome degli studenti separati da uno spazio.\n");
    for (int i = 0; i < N_STUDENTI; i++){
        scanf("%s %s", registro[i].studente.nome, registro[i].studente.cognome);
    }
    printf("\nScrivi la data di nascita di ogni studente nel seguente formato GG/MM/AAAA.\n");
    for (int j = 0; j < N_STUDENTI; j++){
        printf("%s: ", registro[j].studente.cognome);
        scanf("%d/%d/%d", &registro[j].studente.data.giorno, &registro[j].studente.data.mese, &registro[j].studente.data.anno);
    }
    printf("Inserisci la data e poi il voto dello studente.\n");
    for (int k = 0; k < N_STUDENTI; k++){
        for (int l = 0; l < N_VOTI; l++){
            printf("inserisci: ");
            scanf("%d/%d/%d %d", &registro[k].voto[l].data.giorno, &registro[k].voto[l].data.mese, &registro[k].voto[l].data.anno, &registro[k].voto[l].valutazione);
        }
    }

    do{
        printf("Insersci il cognome dello studente: ");
        scanf("%s", cognome);
        for (int m = 0; m < N_STUDENTI && !trovato; m++){
            trovato = 0;
            if (!strcmp(registro[m].studente.cognome, cognome)){
                for (int n = 0; n < N_VOTI; n++){
                    printf("%d\n", registro[m].voto[n].valutazione);
                    media += registro[m].voto[n].valutazione;
                }
                media = media / N_VOTI;
                printf("\nLa media di %s è %.2f\n", cognome, media);
                media = 0;
                trovato = 1;
            }
        }
        if (!trovato){printf("Cognome non trovato.\n");}
    }while(strcmp(cognome, "-1"));
}