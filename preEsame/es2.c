#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct nodo{
    int info;
    struct nodo *next;
}nodo;

nodo *creaLista(void);
nodo *unisciLista(nodo*, nodo*, nodo*);
nodo *stampaLista(nodo*);

int main(){
nodo *L3;

printf("Creazione prima lista:\n");
nodo *L1 = creaLista();
printf("Creazione seconda lista:\n");
nodo *L2 = creaLista();
L3 = L1;
unisciLista(L1, L2, L3);
stampaLista(L3);

  return 0;
}

nodo *creaLista(){
  nodo *p, head;
  int i, n;

  printf("Inserisci la dimensione della lista: ");
  scanf("%d", &n);

  if(n == 0)
    p = NULL;
  else{
    p = (nodo*)malloc(sizeof(nodo));
    printf("Inserisci il primo elemento: ");
    scanf("%d", &p->info);
    nodo *head = p;

    for(i = 1; i < n; i++){
      head -> next = (nodo*)malloc(sizeof(nodo));
      head = head -> next;
      printf("Inserisci il %d valore: ", i + 1);
      scanf("%d", &head->info);
    }
  }
    return p;
  }


nodo* unisciLista(nodo* L1, nodo* L2, nodo *L3) {
  L3 = L1;

  while(L1 -> next != NULL){
    L1 = L1 -> next;
  }
  L1 -> next = L2;
  return L3;
}

nodo *stampaLista(nodo *L){
  nodo *temp = L;
  int i = 0;

  if (temp == NULL){
    printf("\nlista vuota\n");
  }
  else{
    while(temp !=NULL){
      i++;
      printf("elemento in posizione %d: %d\n", i, temp -> info);
      temp = temp -> next;
    }
  }
}
