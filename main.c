#include <stdio.h>
#include "vetor.h"

int main() {
    vetor *v;
    v = criar_vetor(10);

    //inserindo elementos no vetor
    inserir_elemento(v, 10);
    inserir_elemento(v, 20);
    inserir_elemento(v, 30);

    //Alterar o elemento no indice 1 (20) para 99
    alterar_elemento(v, 1, 99);

    //Pesquisar elemento no vetor
    int pos = pesquisar_elemento(v, 99);
    printf("Elemento está no índice %d\n.", pos);

    //Remover elemento no índice 0
    remover_elemento(v, 0);
    
    return 0;
}