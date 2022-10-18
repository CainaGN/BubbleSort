#include <stdio.h>
#include <stdlib.h>
#include "LL_Dupla.c"


int main()
{
   
    List *l = List_create();


    List_add_first(l, 8);
    List_add_first(l, 5);
    List_add_first(l, 3);
    List_add_first(l, 2);


    print_LL(l);
    printf("\n");
    rev_print_LL(l);

}
