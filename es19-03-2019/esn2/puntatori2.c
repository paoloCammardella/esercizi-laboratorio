#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, i, v;

  //array di puntatori
  int *a,*b;

  puts("Inserire la grandezza dei due array");
  scanf("%d", &n);

//allocazione dinamica dei due array
  a=(int *)malloc(sizeof(int)*n);
  b=(int *)malloc(sizeof(int)*n);

  for(i=0; i<n; i++){
    printf("Inserisci valore %d: ", i);
    scanf("%d", &v);

    a[i]=v;
    b[i]=a[i];
  }


  printf("array a contiene\n");
  for(i=0; i<n; i++){
    //stampa array a
    printf("posizone %d: %d\n", i, a[i]);
  }

  printf("array b contiene\n");
  for(i=0; i<n; i++){
    //stampa array b
    printf("posizone %d: %d\n", i, b[i]);

  }




}
