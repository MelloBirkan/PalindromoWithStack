/*
* ----------------------------------------README------------------------------------------------
* Pilha estática e sequencial
* Desenvolvimento com struct(?? why)
* Pilha tem valor constante, podende ser alterado antes da compilação
* Pilha foi feita usando namespace std
* typedef usado para definir o typo da pilha, podendo ser alterado antes da compilação
*/


#include <iostream>
using namespace std;
typedef char Elem;
const int TAM_PILHA = 100;


// struct da Pilha contendo o ponteiro para o top
struct Pilha {
   int topo;
   Elem e[TAM_PILHA];
};


// Inicia a Pilha como vazia
void init ( Pilha &p ){
  p.topo = -1;
}


// Verifica se a Pilha está vazia
bool isEmpty( Pilha p ){
  if (p.topo == -1)
   return true;
  else
   return false;
}


// Verifica se a Pilha está cheia
bool isFull( Pilha p ){
  if (p.topo == TAM_PILHA-1)
   return true;
  else
   return false;
}


// insere o Elemento e na Pilha p
void push ( Pilha &p, Elem e ){
  if (! isFull( p ))
    p.e[++p.topo] = e;
  else 
    cout << "overflow - Estouro de Pilha";
}


// remove o elemento do topo da Pilha p
Elem pop( Pilha &p ){
  if (! isEmpty( p ))
   return p.e[p.topo--];
  else{
    cout << "underflow - Esvaziamento de Pilha";
    return -1;
  }
}


// obtém o elemento do topo da Pilha p
Elem topo( Pilha p ){
  if ( ! isEmpty( p ))
   return p.e[p.topo];
  else{
    cout << "underflow - Esvaziamento de Pilha";
    return -1;
  }
}


// obtém o total de elementos 
int size( Pilha p ){
  return p.topo+1;
}