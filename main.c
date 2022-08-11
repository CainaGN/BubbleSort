#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenacao.h"
#include "ordenacao.c"
#include <time.h>
#define size_v 50



    int main(){
    
    int vet[size_v];// = {0,1,3,2,4,5,6,8,7,9};
    float timer = 0.0;
    time_t begin = time(NULL);
    time_t t;

       for (int i = 0; i < size_v; i++)
       {
        //srand ( (unsigned) time (&t));
         vet[i] = (rand() % 100);
        }

    bubble(&vet);
    //selectionSort(&vet);
    //insertionSort(&vet);

    printf("\n");
      print(&vet);
        time_t end = time(NULL);
        
        timer = end - begin;
        printf("\ntime: %f ms\n", timer);
        
        return 0;
}
    

