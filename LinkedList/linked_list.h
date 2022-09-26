#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct _snode SNode;
typedef struct _slinked_list LinkedList;
void print_LL(LinkedList *L);
SNode *SNode_create(int val);
void remove_node(SNode** head, int position);
void search(LinkedList *L, int value);
void add_last(LinkedList *L, int val);
void add_first(LinkedList *L, int val);
LinkedList *LinkedList_create();
SNode *SNode_create(int val);
void LinkedList_destroy(LinkedList **L_ref);

#endif
