#include <stdio.h>

void creazione(int [], int);
int ordinamento(int[], int);
int unioneOrdinata(int[], int[], int, int[]);


int main(){

  int n, i;
  printf("Inserire la dimensione dei due array da unire: ");
  scanf("%d", &n);
  printf("\n\n");

  int m = n + n;
  int a[n], b[n], c[m];

  printf("Creazione di a.\n");
  creazione(a, n);
  ordinamento(a, n);

  printf("\n\n");

  printf("Creazione di b.\n");
  creazione(b, n);
  ordinamento(b, n);

  for( i = 0; i < n; i++){
    printf("%d", b[i]);
  }

  unioneOrdinata(a, b, n, c);
  ordinamento(c, m);
  for(i = 0; i < n*2; i++){
    printf("elemento in posizione %d di c: %d\n" , i + 1, c[i]);
  }

}

void creazione(int z[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("Inserisci il numero in posizione %d: ", i + 1);
    scanf("%d", &z[i]);
  }
}

//bubblesort
int ordinamento(int z[], int n){

  int i, j, temp;

  for(i = 0; i < n-1; i++){
    for(j = 0; j < n-i; j++){
      if(z[j] > z[j + 1]){
        temp = z[j];
        z[j] = z[j + 1];
        z[j + 1] = temp;
      }

    }
  }
  return z[n];
}

int unioneOrdinata(int y[], int z[], int n, int c[]){
  int i, j = 0;
  int m = n + n;

for(i = 0; i < n; i++){
  c[i] = y[i];
}

for (i = n; i < m; i++){
  c[i] = z[j];
  j++;
  }
  return c[m];
}
