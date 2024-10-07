#include <stdio.h>

int main(){
    float a, b, c;

    printf("Inserisci i lati del triangolo separati da uno spazio: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c){
        printf("Il triangolo è equilatero.\n");
    }
    else if (a == b || a == c || b == c){
        printf("Il triangolo è isoscele.\n");
    }
    else if (a != b && b != c && a != c){
        printf("Il triangolo è scaleno.\n");
    }

    if ((a*a + b*b == c*c) || ((c*c + b*b == a*a) || ((a*a + c*c == b*b)))){
        printf("Il triangolo è rettangolo.\n");
    }
}