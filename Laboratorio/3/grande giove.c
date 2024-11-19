#include <stdio.h>

typedef struct{
    int anno;
    int mese;
    int giorno;
    int ora;
    int minuto;
}data;

int bisestile(int anno){
    if (anno % 400 == 0){
        return 1;
    }
    else if ((anno % 4 == 0) && (anno % 100 != 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int precendenza(data partenza, data arrivo){
    if (partenza.anno > arrivo.anno){return 1;}
    else if (partenza.anno < arrivo.anno){return 0;}
    else{
        if (partenza.mese > arrivo.mese){return 1;}
        else if (partenza.mese < arrivo.mese){return 0;}
        else{
            if (partenza.giorno > arrivo.giorno){return 1;}
        else if (partenza.giorno < arrivo.giorno){return 0;}
        else{
            if (partenza.ora > arrivo.ora){return 1;}
            else if (partenza.ora < arrivo.ora){return 0;}
            else{
                if (partenza.minuto > arrivo.minuto){return 1;}
                else if (partenza.minuto < arrivo.minuto){return 0;}
            }
        }
        }
    }
}

data delta_t(data partenza, data arrivo){
    int min, ore, giorni, mesi, anni;
    int riporto, i;
    riporto = 0;
    if (arrivo.minuto - partenza.minuto < 0){riporto = -1; min = 60 - (partenza.minuto - arrivo.minuto);}
    else{min = arrivo.minuto - partenza.minuto;}
    if (arrivo.ora - partenza.ora < 0){ore = 24 - (partenza.ora - arrivo.ora) + riporto; riporto = -1;}
    else{ore = arrivo.ora - partenza.ora + riporto; riporto = 0;}
    if (arrivo.giorno - partenza.giorno < 0){giorni = 30 - (partenza.giorno - arrivo.giorno) + riporto; riporto = -1;}
    else{giorni = arrivo.giorno - partenza.giorno + riporto; riporto = 0;}
    if (arrivo.mese - partenza.mese < 0){mesi = 12 - (partenza.mese - arrivo.mese) + riporto; riporto = -1;}
    else{mesi = arrivo.mese - partenza.mese + riporto; riporto = 0;}
    if (arrivo.anno - partenza.anno < 0){anni = partenza.anno - arrivo.anno + riporto; riporto = -1;}
    else{anni = arrivo.anno - partenza.anno + riporto;}

    if (bisestile(partenza.anno) && partenza.mese < 2){giorni++;}
    if (bisestile(partenza.anno) && partenza.mese == 2 && partenza.giorno <= 28){giorni++;}
    
    if (bisestile(arrivo.anno) && arrivo.mese >= 2 && arrivo.giorno != 29){giorni++;}
    for (i = 1; i < (arrivo.anno - partenza.anno); i++){
        if (bisestile(partenza.anno + i)){giorni++;}
    }
    data tempoTrascorso;
    tempoTrascorso.anno = anni;
    tempoTrascorso.mese = mesi;
    tempoTrascorso.giorno = giorni;
    tempoTrascorso.ora = ore;
    tempoTrascorso.minuto = min;

    return tempoTrascorso;

}

int main(){
    data partenza;
    data arrivo;
    data tempoTrascorso;

    printf("Inserisci data e ora di partenza della DeLorean (DD-MM-YYYY hh:mm):\n");
    scanf("%d-%d-%d %d:%d", &partenza.giorno, &partenza.mese, &partenza.anno, &partenza.ora, &partenza.minuto);

    printf("Inserisci data e ora di destinazione della DeLorean (DD-MM-YYYY hh:mm):\n");
    scanf("%d-%d-%d %d:%d", &arrivo.giorno, &arrivo.mese, &arrivo.anno, &arrivo.ora, &arrivo.minuto);

    if (!precendenza(partenza, arrivo)){
        tempoTrascorso = delta_t(partenza, arrivo);
        printf("%d anni, %d mesi, %d giorni, %d ore, %d minuti\n", tempoTrascorso.anno, tempoTrascorso.mese, tempoTrascorso.giorno, tempoTrascorso.ora, tempoTrascorso.minuto);
    }else{
        tempoTrascorso = delta_t(arrivo, partenza);
        printf("%d anni, %d mesi, %d giorni, %d ore, %d minuti\n", tempoTrascorso.anno, tempoTrascorso.mese, tempoTrascorso.giorno, tempoTrascorso.ora, tempoTrascorso.minuto);

    }

}