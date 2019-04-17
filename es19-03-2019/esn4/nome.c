#include <stdio.h>
#include <stdlib.h>

void inversioneArray(int *, int);

int main() {

  int n, i;
  printf("Inserire dimensione array: ");
  scanf("%d", &n);

    int *a=(int *)malloc(sizeof(int)*n);

    for(i = 0; i < n; i++){
      printf("Elemento in posizione %d: ", i);
      scanf("%d", &a[i]);
      }
    printf("\n");

  inversioneArray(a, n);

  for(i = 0; i < n; i++){
    printf("Elemento in posizione %d: %d\n", i, a[i]);
  }
  return 0;
}

void inversioneArray(int* a, int n){
int i;

int *b=(int *)malloc(sizeof(int)*n);
for(i = 0; i < n; i++){
  b[i] = a[(n-1)-i];
}
for(i = 0; i < n; i++){
  a[i] = b[i];
}

}
