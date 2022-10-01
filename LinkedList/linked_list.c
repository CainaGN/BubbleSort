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
    //p->next = L->begin;
    
    if(L->begin == NULL)
    {
        p->next = NULL;
        L->begin = p;
        L->end = p;
    } else
    {
        p->next = L->begin;
        L->begin = p;
    }
    L->size++;
}

void add_last(LinkedList *L, int val)
{
    SNode *p  = SNode_create(val);
    if(L->begin == NULL)
    {
        L->begin = p;
        L->end = p;
    } else 
    {
        L->end->next = p;
        L->end = p;
        
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


void LinkedList_destroy(LinkedList **L_ref)
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

void ord_insert (SNode **L, int val)
{
    SNode *new = malloc(sizeof(SNode)), *aux;
    if(new)
    {
        new->value = val;
        if(*L == NULL)  
        {
            new->next = NULL;
            *L = new;
        }else if(new->value < (*L)->value)
        {
            new->next = *L;
            *L = new;
        }else
        {
            aux = *L;
            while(aux->next && new->value > aux->next->value)
            {
                aux = aux->next;
            }
            new->next = aux->next;
            aux->next = new;
        }
    
    }else
    {
        printf("Erro");
    }
    

}

