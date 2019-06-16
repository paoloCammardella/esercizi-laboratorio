#include <stdio.h>
#include <malloc.h>

typedef struct nodo{
      int info;
      struct nodo *next;
}nodo;

nodo *creaLista(void);


int main(){

  nodo *L2 = creaLista();
}

nodo *creaLista(){
  nodo *n, *head;
  int i, x;

  printf("Inserire la dimensione della lista: ");
  scanf("%d", &x);

  n = (nodo*)malloc(sizeof(nodo));
  printf("Inserire l'elemento in posizione 1: ");
  scanf("%d", &n -> info);
  head = n;

  for(i = 1; i < x; i++){
    n -> next = (nodo*)malloc(sizeof(nodo));
    n = n -> next;
    printf("inserire l'elemento in posizione %d: ", i + 1);
    scanf("%d", &n -> info);
  }
  return head;
}
