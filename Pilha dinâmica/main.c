#include <stdio.h>
#include <stdlib.h>
#include "LL_Dupla.c"


int main()
{
   
    List *l = List_create();


    Push(l, 8);
    Push(l, 5);
    Push(l, 3);
    Push(l, 9);
    Push(l, 6);

    printf("\n");
    rev_print_LL(l);

    Pop(l);
        rev_print_LL(l);

}