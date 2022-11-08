#include <stdbool.h>

typedef struct _tree Tree;
typedef struct _node Node;

Tree *create_tree();
Node *create_node(int val);

void destroy_tree(Tree *T);

bool tree_is_empty(Tree *tree);

void insert(Tree *T, int val);

void pre_order(Tree *T);

//calcular a altura da arvore
//verificar simetria

// fazer o print .-.



// criar o destroy
//buscar algo dentro da ávore
//dividir a arvore após 50 elementos e ligar as arvores, criando uma floresta 
//criar menu para: inserir(ver se nao é duplicado), deletar, consultarm verificar simetria;