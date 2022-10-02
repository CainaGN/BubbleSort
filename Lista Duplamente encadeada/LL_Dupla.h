#include <stdbool.h>

typedef struct _double_node DoubleNode, Node;
typedef struct _double_linked_list DoubleLinkedList;
Node *Node_create(int val);
List *List_create();

void List_Destroy(DoubleLinkedList **list); //implementado em aula
bool List_is_empty(const DoubleLinkedList *list);// implementado em aula
void List_add_first(DoubleLinkedList *list, int val);  //(v)
void List_add_last(DoubleLinkedList *list, int val);//implementar
void List_print(const DoubleLinkedList *list);//implementar
void List_inverted_print(const DoubleLinkedList *list); //implementar
void List_remove(const DoubleLinkedList *list); //implementar

