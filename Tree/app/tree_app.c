#include "../include/tree.h"
#include <stdio.h>

int main()
{
    
    
    Tree *t = create_tree();

    pre_order(t);
    
    insert(t, 5);
    insert(t, 8);
    insert(t, 9);
    insert(t, 7);
    insert(t, 4);
    insert(t, 2);
    insert(t, 1);
    insert(t, 3);
    insert(t, 6);
    insert(t, 15);


    return 0;
}