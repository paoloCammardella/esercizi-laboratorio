#include <stdio.h>
#include <stdlib.h>


int sommaMatrici(int**, int**, int);

int main(){
  int n, i, j;
  //dai devo realmente commentare anche questo?
  printf("inserire la dimensione delle matrici: ");
  scanf("%d", &n);

  printf("\nInserire gli elementi della matrice a\n");
//allocazione dinamica della matrice a
  int **a=(int**)malloc(sizeof(int*)*n);
    for(i = 0; i < n; i++){
      a[i]=(int *)malloc(sizeof(int)*n);
      //non lo so realmente
      for(j = 0; j < n; j++){
        printf("elemento in riga %d e colonna %d: ", i + 1, j + 1);
        scanf("%d", &a[j]);
      }
      *(a+i);
     }
     printf("\nInserire gli elementi della matrice b\n");

  //stessa cosa di sopra solo che sta volta è per b
  int **b=(int**)malloc(sizeof(int*)*n);
  for(i = 0; i < n; i++){
    b[i]=(int *)malloc(sizeof(int)*n);
    for(j = 0; j < n; j++){
      printf("elemento in riga %d e colonna %d: ", i + 1, j + 1);
      scanf("%d", &b[j]);
    }
    *(b+i);
  }

sommaMatrici(a, b, n);

  free(a);
  free(b);

  printf("\nStampa della matrice somma\n");
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d  ", **c);
    }
    printf("\n");
  }

}

int sommaMatrici(int**a, int**b, int n){

  int i, j;

  int **c=(int**)malloc(sizeof(int*)*n);
  for(i = 0; i < n; i++){
    c[i]=(int *)malloc(sizeof(int)*n);
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
    *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
    }
  }

  return c;
}
