#include <stdio.h>
#include <stdlib.h>
#include "linked_list.c"

int main (){

    LinkedList *lista;
    LinkedList_create(lista);
    add_first(lista, 0);
    add_first(lista, 8);
    add_first(lista, 5);
    add_first(lista, 3);


    print_LL(lista);

    search(lista, 5);
    search(lista, 2);
    search(lista, 7);
    search(lista, 3);

    remove_node(lista, 3);
    print_LL(lista);



    



    return 0;
}