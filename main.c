#include <stdio.h>

int main(void){
  int voto;
  printf("Inserisci il tuo voto: ");
  scanf("%d", &voto);

  if (0 < voto <= 30){
    if (voto >= 18){
      printf("Accetta immediatamente! sopra il 18 va bene tutto\n");
    }
    else{
      printf("Tocca il prossimo appello (fai schifo)\n");
    }
  }
  else{
    printf("Dovevi inserire il voto in trentesimi\n");
  }
  printf("Ricorda sempre: 18 trenta non fanno una laurea, 30 diciotto si\n");
}
