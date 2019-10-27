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
nt primo(int num){
int i, primo;

for(i=2;i<num;i++)
if(num%i == 0)
primo == 0;
primo == 1;

return primo;
}

nodo *numeriPrimi(){
  nodo *prec;

  primo(L -> info);
  prec = L;
  L = L -> next;
  while (L -> next != NULL){
    primo(L -> info);
    if(primo == 0)
    L = L-> next;
    else{
      prec = L;
      
    }

  }
}









