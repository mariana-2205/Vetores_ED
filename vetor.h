//Dados
typedef struct {
  int *dados;
  int n;
} vetor;

//Funções
vetor* criar_vetor(int tam);

void inserir_elemento(vetor *v, int x);

void alterar_elemento(vetor *v, int i, int novo_valor);

int pesquisar_elemento(vetor *v, int x);

void remover_elemento(vetor *v, int i);