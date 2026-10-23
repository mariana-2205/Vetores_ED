#include "vetor.h"
#include <stdio.h>
#include <stdlib.h>

vetor* criar_vetor(int tam) {
  vetor *v = (vetor*) malloc(sizeof(vetor));
  v->dados = (int*) malloc(tam * sizeof(int));
  v->n = 0;
  return v;
}

void inserir_elemento(vetor *v, int x) {
  v->dados[v->n] = x;
  v->n++;
}

void alterar_elemento(vetor *v, int i, int novo_valor) {
    v->dados[i] = novo_valor;
}

int pesquisar_elemento(vetor *v, int x) {
  int i; 
  for (i = 0; i < v->n; i++)
    if (v->dados[i] == x) return i;
  return -1;
}

void remover_elemento(vetor *v, int i) {
  v->dados[i] = v->dados[v->n - 1];
  v->n--;
}