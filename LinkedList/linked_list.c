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
    SNode *end;
} LinkedList;

SNode *SNode_create(int val)
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
    SNode *p  = SNode_create(val);
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



void search(LinkedList *L, int value)
{
    int b = 0;
    SNode *p= L->begin;
    while(p != NULL)
    {
        if(p->val == value)
        {
            b++;
        }
        p = p->next;
    }

    if(b != 0)
    {
        printf("\n%i encontrado", value);
    }
    else {
        printf("\n%i nao encontrado", value);
    }

}


void remove_node(SNode** head, int position)
{
    SNode* aux;
    SNode* ant;
    aux = *head;
    ant = *head;
    for (int i = 0; i < position; i++) 
    {
        if (i == 0 && position == 1) 
        {
            *head = (*head)->next;
            free(aux);
        }
        else 
        {
            if (i == position - 1 && aux) 
            {
                ant->next = aux->next;
                free(aux);
            }
            else 
            {
                ant = aux;
                if (ant == NULL)
                    break;
                aux = aux->next;
            }
        }
    }
}


/*void add_middle(LinkedList *L, int val)
{
    SNode *p = SNode_create(val);

}*/

void print_LL(LinkedList *L)
{
    SNode *p= L->begin;
    printf("\nL -> ");
    while(p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
}


void LinkedList_destroy(LinkedList **L_ref)//melhorar esse código
{
    LinkedList *L = *L_ref;
    SNode *p = L->begin;
    SNode *aux = NULL;

    
    while(p != NULL)
    {
        aux = p;
        p = p->next;
        free(aux);
    }
    free(L);

}


