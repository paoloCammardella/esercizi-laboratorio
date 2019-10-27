#include <stdio.h>
#include <stdlib.h>

//dichiarazione tipo nodo
typedef struct nodo{
    int val;
    struct nodo* next;
}nodo;

//prototipo per lafunzione creaNodo
nodo* creazioneNodo(int);
//prototipo funzione push in front
nodo* pushInFrony(nodo*, int);
//prototipo funzione push at end
nodo* pushAtEnd(nodo*, int);
//prototipo funzione pop in front
nodo* popInFront(nodo*);
//prototipo funzione pop at the end
nodo* popAtEnd(nodo*);
int main(){
int x = 5;
nodo * n1;

printf("fino a qui funziono\n");
n1 = creazioneNodo(x);
printf("%d\n", n1->val);

printf("anche fino a qui\n");
n1 = pushAtEnd(n1, x);
printf("namose vado anche fino a qui\n");
}

//funzione per la creazione di un nodo
nodo* creazioneNodo(x){
  nodo *n1 = (nodo*)malloc(sizeof(nodo));

  n1 -> val = x;
  n1 -> next = NULL;

  return n1;
}

//funzione push in frony
nodo* pushInFrony(nodo* head, int x){

     nodo* curr;
     if(curr -> next = NULL)
      creazioneNodo(x);
      head -> val = x;
      head -> next = curr;
}


//funzione push at the end
nodo* pushAtEnd(nodo* head, int x){

    nodo* curr;
    curr = head;

    while(curr -> next != NULL){
      curr = curr -> next;
    }

  curr -> next = creazioneNodo(x);

    return head;
}
//funzione pop in front
nodo* popInFront(nodo *head){
    head = head -> next;

    return head;
}

nodo* popAtEnd(nodo* head){
  nodo* prev, curr;
  curr = head;
  while(curr -> next != NULL){
    prev = curr;
    curr = curr -> next;
      }
    prev -> next = NULL;

    return prev;

}
