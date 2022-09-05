#include <stdlib.h>
#include "linked_list.h"
#include <stdio.h>
typedef struct _snode
{
    int val;
    struct _snode *next;
    
} SNode;

typedef struct _slinked_list 
{
    SNode *begin;
    int size;
} LinkedList;

SNode *Snode_create(int val)
{
    SNode *snode  = (SNode*) calloc(1, sizeof(SNode));
    snode->val = val;
    snode->next = NULL;
    return snode;
}

LinkedList *LinkedList_create()
{
        LinkedList *linked_list  = (LinkedList*) calloc(1, sizeof(LinkedList));
        linked_list->begin = NULL;
        return linked_list;
}

void add_first(LinkedList *L, int val)
{
    SNode *p = SNode_create(val);
    p->next = L->begin;
    L->begin = p;
    L->size++;
}

void add_last(LinkedList *L, int val)
{
    SNode *p  = Snode_create(val);
    if(L->begin == NULL)
    {
        L->begin = p;
    } else 
    {
        SNode *aux = L->begin;
        while(aux->next != NULL)
        {
            aux = aux->next;
        }
        aux = aux->next;
        
    }
    L->size++;
}


void print_LL(LinkedList *L)
{
    SNode *p= L->begin;
    printf("L -> ");
    while(p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
}

//implementar e fazer funcionar. é simples :D