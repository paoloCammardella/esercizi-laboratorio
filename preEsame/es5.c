#include <stdio.h>
#include <malloc.h>

typedef struct nodo{
    int info;
    struct nodo *next;
}nodo;

nodo *creaLista();
nodo *sommaADue();
void stampaLista();

int main(){
  nodo *L1 = creaLista();
  nodo *L2 = sommaADue(L1);
  stampaLista(L2);
}

nodo *creaLista(){
  nodo *n, *head;
  int i,x;

  printf("Inserire la dimensione della lista: ");
  scanf("%d", &x);

  if(x == 0)
    n = NULL;
  else{
    n = (nodo*)malloc(sizeof(nodo));
    printf("Inserire l'elemento in posizione 1: ");
    scanf("%d", &n -> info);
    head = n;

  for(i = 1; i < x; i++){
    n -> next = (nodo*)malloc(sizeof(nodo));
    n = n -> next;
    printf("Inserire l'elemento in posizione %d: ", i + 1);
    scanf("%d", &n -> info);
    }
  return head;
  }
}

nodo *sommaADue(nodo *L){
  nodo *L2;
  nodo *head = L2;

  while(L -> next != NULL){
    L2 -> info = L -> info + L -> next -> info;
    L = L -> next;
    L2 = L2 -> next;
  }
  return head;
}

void stampaLista(nodo *L){
  int i = 1;
  nodo *head = L;
  while(L -> next != NULL){
    printf("Elemento in posizione %d: %d\n", i, L -> info);
    L = L -> next -> next;
    i++;
  }
}
