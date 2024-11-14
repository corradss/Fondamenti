#include <stdio.h>
#include <string.h>

#define MAX 200

typedef struct {
    int numero_matricola;
    char nome[MAX];
    char cognome[MAX];
    int voto;
}studente;

studente dati(int, char[], char[], int);

int main(){
    int numero_matr;
    char nome[MAX];
    char cognome[MAX];
    int voto;

    scanf("%s", nome);
    scanf("%s", cognome);
    scanf("%d", &numero_matr);
    scanf("%d", &voto);

    studente corrado = dati(numero_matr, nome, cognome, voto);

    printf("nome: %s\n", corrado.nome);
    printf("cognome: %s\n", corrado.cognome);
    printf("numero: %d\n", corrado.numero_matricola);
    printf("voto: %d\n", corrado.voto);
    return 0;
}

studente dati(int numero_matr, char nome[], char cognome[], int voto){
    studente stud;
    stud.numero_matricola = numero_matr;
    strcpy(stud.nome, nome);
    strcpy(stud.cognome, cognome);
    stud.voto = voto;
    return stud;
}