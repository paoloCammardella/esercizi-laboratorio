#include <stdio.h>
#include "mate.h"

int main(){

    int a, b, c, d;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("\n");

    printf("Inserisci il valore di b: ");
    scanf("%d", &d);
    printf("\n");

    printf("Inserisci il valore di c: ");
    scanf("%d", &c);
    printf("\n");

    printf("Inserisci il valore di d: ");
    scanf("%d", &d);
    printf("\n");

    int soma = somma(a ,b);
    printf("%d\n", soma);

    return 0;
}