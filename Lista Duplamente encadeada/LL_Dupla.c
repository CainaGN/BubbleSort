//#include "LL_Dupla.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct _double_node 
{
    int val;
    struct _double_node *next;
    struct _double_node *prev;
}DoubleNode, Node;

typedef struct _double_linked_list
{
    Node *begin;
    Node *end;
    size_t size;
}DoubleLinkedList, List;

Node *Node_create(int val)
{
    Node *node = (Node*)calloc(1, sizeof(Node));
    node->next = NULL;
    node->prev = NULL;
    node->val = val;

    return node; //retorna o endereço de memória
}

List *List_create()
{
    List *list = (List *) calloc(1, sizeof(List));   
    list->begin = NULL;
    list->end = NULL;
    list->size = 0;
    return list;
}

bool List_is_empty(const DoubleLinkedList *list)
{
    return list->size == 0;
}

void List_Destroy(DoubleLinkedList **list)
{
    List *l = *list;
    Node *p = l->begin;
    Node *aux = NULL;
    while(p != NULL)
    {
        aux = p;
        p = p->next;
        free(aux);
    }
    free(l);
    *list = NULL; //se nao fizermos isso, se tentarmos acessar l->begin, vai dar erro de violação. Boa prática de programação.

}

void List_add_first(DoubleLinkedList *list, int val)
{

    Node *p = Node_create(val);
    if(List_is_empty(list))
    {
        list->end = p;
    }else
    {
        p->next = list->begin;
        list->begin->prev = p;     
    }
    list->begin = p;
    list->size++;
}

void print_LL(DoubleLinkedList *L)
{
    Node *p= L->begin;
    printf("\nL -> ");
    while(p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
}

void List_add_last(DoubleLinkedList *list, int val)
{
    Node *novo = Node_create(val);
    novo->prev = list->end;

    if(List_is_empty(list))
    {
        list->begin = novo;
    }else
    {
        list->end->next = novo;
    }
    list->end = novo;
    list->size++;

}


void rev_print_LL(DoubleLinkedList *L)
{
    Node *p= L->end;
    printf("\nL -> ");
    while(p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->prev;
    }
    printf("NULL\n");
}
