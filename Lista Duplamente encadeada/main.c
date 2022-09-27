#include <stdio.h>
#include <stdlib.h>
#include "LL_Dupla.c"


int main()
{
    DoubleLinkedList *lista;
    List_create(lista);
    
    //List *l = List_create();
    List_add_first(lista, 8);
    List_add_first(lista, 5);
    List_add_first(lista, 3);
    List_add_first(lista, 2);

    print_LL(lista);

}