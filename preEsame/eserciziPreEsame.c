#include <stdio.h>
#include <malloc.h>

typedef struct nodo{
      int info;
      struct nodo *next;
}nodo;


nodo *creaLista(void);
nodo *interseca(nodo*, nodo*);

int main(){

  printf("Creazione della prima lista: \n");
  nodo *L1 = creaLista();
  printf("Creazione della seconda lista: \n");
  nodo *L2 = creaLista();


  return 0;
}


nodo *creaLista(){

  nodo *n, *head;
  int i, x;

  printf("Inserire la dimensione desiderata per la lista: ");
  scanf("%d", &x);

  if(x == 0)
    n = NULL;
  else{
    n =(nodo*)malloc(sizeof(nodo));
    printf("Inserisci il primo valore: ");
    scanf("%d", &n->info);
    head = n;

    for(i = 1; i < x; i++){

        head->next = (nodo*)malloc(sizeof(nodo));
        head = head->next;
        printf("Inserisci il %d valore: ", i + 1);
        scanf("%d", &head->info);
    }
  }
  return n;
}

nodo *interseca(nodo *L1, nodo *L2){
  if(L1 == NULL)
  return L2;
  if(L2 == NULL)
  return L1;

  nodo *L3;
  nodo *prec = NULL;
  nodo *curr = head;

  while(L1 != NULL && L2 != NULL){

  }

return L3;
}
