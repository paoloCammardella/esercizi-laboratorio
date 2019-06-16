#include <stdio.h>
#include <malloc.h>

typedef struct nodo{
    int info;
    struct nodo *next;
}nodo;

nodo *creaLista(void);
nodo *sommaPrec(nodo *);

int main(){

  nodo *L1 = creaLista();
  sommaPrec(L1);
}

nodo *creaLista(){
    nodo *n, *head;
    int i, x;

    printf("Inserire la dimensione desiderata per la lista: ");
    scanf("%d", &x);

    if( x == 0)

    n = NULL;

    else{
        n = (nodo*)malloc(sizeof(nodo));
        printf("Inserire il valore in posizione 1: ");
        scanf("%d", &n -> info);
        head = n;

        for(i = 1; i < x; i++){
          n -> next = (nodo*)malloc(sizeof(nodo));
          printf("Inserire il valore in posizione %d: ", i + 1);
          scanf("%d", &n -> info);
        }
    }
    return head;
}

nodo *sommaPrec(nodo *L){
     nodo *campione, *curr;
     campione = L -> next -> next;
     curr = L -> next;
     int sommaPrecedenti = L -> info;

     if(L -> info + curr ->info == campione -> info)

     return 1;

     else{
      curr = curr -> next;
     while(campione -> next != NULL){

       if(sommaPrecedenti + curr ->info == campione -> info)
       return 1;

       else{
         sommaPrecedenti = sommaPrecedenti + curr -> info;
         campione = campione -> next;
         curr = curr -> next;
       }
     }
   }

     return 0;
}
