#include <stdio.h>
#include <stdlib.h>

int main() {
  int *a;
  int i, n, x;

  printf("Inserire la dimensione dell'array: ");
  scanf("%d", &n);

  a=(int *)malloc(sizeof(int)*n);

  for(i = 0; i < n; i++){
    printf("Inserire l'elemento nella posizione %d: ", i);
    scanf("%d", &a[i]);
  }

  printf("Quale elemento si desidera trovare?\n");
  scanf("%d", &x);

    for(i = 0; i < n; i++){
    if(a[i] != x)
      i=i;
      else{
      printf("elemento trovato in posizione %d\n", i);
      break;
      }

  }

  return 0;
}
