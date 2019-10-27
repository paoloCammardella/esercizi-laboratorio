#include <stdio.h>
#include <malloc.h>


typedef struct nodo{
      int info;
      struct nodo *next;
}nodo;

nodo *creaLista(void);
nodo *pariInTesta(nodo*);

int main(){
nodo *L1 = creaLista();

nodo *L2 = pariIntesta(L1);
}

nodo *creaLista(){
    nodo *n, *head;
    int i, x;

    printf("Inserire la dimensione della lista: ");
    scanf("%d", &x);

    printf("\n");

    if(x == 0)
    n = NULL;

    else{
    n = (nodo*)malloc(sizeof(nodo));
    head = n;

    printf("Inserire il valore in posizione 1: ");
    scanf("%d", &head -> info);

    for( i = 1; i < x; i++){
        printf("inserisci il valore in posizione %d: ", i + 1);
        head -> next = (nodo*)malloc(sizeof(nodo));
        head = head -> next;
        scanf("%d", &head -> info);
    }
  }

}

nodo *pariInTesta(nodo* L1){
  nodo *L2;

  while(L1 -> next != NULL){

    if(L1 -> info % 2 == 0){

      L2 = L1;
      L1 = L1 -> next;
      L2 = L2 -> next;
    }
    else

    L1 = L1 -> next;
  }
    L2 = L2 -> next;

  while(L2 -> next != NULL){

    if(L1 -> info % 2 != 0){

      L2 -> next = L1;
      L2 = L2 -> next;
      L1 = L1 -> next;
    }
    else

    L1 = L1 -> next;
  }
}
