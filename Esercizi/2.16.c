//Scrivete un programma che legga due interi inseriti dall'utente
//quindi ne stampi la somma, prodotto, differenza, quoziente e resto

#include <stdio.h>

int main(){
    int num1, num2;
    int somma, prod, diff1, diff2, resto1, resto2;
    float quoziente1, quoziente2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    somma = num1 + num2;
    prod = num1 * num2;

    diff1 = num1 - num2;
    diff2 = num2 - num1;

    quoziente1 = (float)num1 / num2;
    quoziente2 = (float)num2 / num1;
    
    resto1 = num1 % num2;
    resto2 = num2 % num1;

    printf("Somma: %d\n", somma);
    printf("Prodotto: %d\n", prod);
    printf("Differenza (primo - secondo): %d, (secondo - primo): %d\n", diff1, diff2);
    printf("Quoziente (primo diviso secondo): %.2f, (secondo diviso primo): %.2f\n", quoziente1, quoziente2);
    printf("Resto (primo diviso secondo): %d, (secondo diviso primo): %d\n", resto1, resto2);

    return 0;
}