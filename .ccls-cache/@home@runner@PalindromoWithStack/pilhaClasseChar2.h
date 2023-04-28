/*
*Pilha estática e sequencial
*Desenvolvimento com struct

*/

#include <iostream>

using namespace std;

// definição de um novo tipo de dado
typedef char Elem;

// constante que indica o 
// Tamanho alocado para a pilha
const int TAM_PILHA = 10;

// Estrutura da Pilha contendo
// o ponteiro para o topo
// e o vetor sequencial e estático
struct Pilha {
   int topo;
   Elem e[TAM_PILHA];
};


// Inicia a Pilha p
// como vazia
void init ( Pilha &p ){
  p.topo = -1;
}

// Verifica se a Pilha p
// está vazia
// retornando true (se vazia)
// e false (caso contrário)
bool isEmpty( Pilha p ){
  if (p.topo == -1)
   return true;
  else
   return false;
}

// Verifica se a Pilha p
// está cheia
// retornando true (se vazia)
// e false (caso contrário)
bool isFull( Pilha p ){
  if (p.topo == TAM_PILHA-1)
   return true;
  else
   return false;
}

// insere o Elemento e na Pilha p
// se ela não está cheia
void push ( Pilha &p, Elem e ){
  if (! isFull( p ))
    p.e[++p.topo] = e;
  else 
    cout << "overflow - Estouro de Pilha";
}

// remove o elemento do topo da Pilha p
// se ela não está vazia
Elem pop( Pilha &p ){
  if (! isEmpty( p ))
   return p.e[p.topo--];
  else{
    cout << "underflow - Esvaziamento de Pilha";
    return -1;
  }
}

// obtém o elemento do topo da Pilha p
// se ela não está vazia
// sem remover o elemento.
Elem topo( Pilha p ){
  if ( ! isEmpty( p ))
   return p.e[p.topo];
  else{
    cout << "underflow - Esvaziamento de Pilha";
    return -1;
  }
}

// obtém o total de elementos 
// armazenados na Pilha
int size( Pilha p ){
  return p.topo+1;
}


