#include <stdio.h>
#include <stdlib.h>

int main() {

int i;
int n;
int *a;
int v;

printf("Inserire la grandezza dell'array: ");
scanf("%d", &n);

a=(int*)malloc(sizeof(int*)*n);
for(i=0;i<n;i++){
printf("inserisci valore ");
scanf("%d",&v);
a[i]=v;
}
for(i=0;i<n;i++){
printf("posizione=%d numero=%d byteoccupati=%d \n",&(a[i]),a[i],sizeof(a[i]));
}


return 0;
}
