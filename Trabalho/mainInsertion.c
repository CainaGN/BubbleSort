#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenacao.h"
#include "ordenacao.c"
#include <time.h>
#define size_v 500000



    int main(){
    
    int vet[size_v];
    float timer = 0.0;
    time_t begin = time(NULL);
    FILE *file;
    file = fopen("dados.txt", "a");

       for (int i = 0; i < size_v; i++)
       {
         vet[i] = (rand() % 100);
        }

    insertionSort(&vet);

        printf("\n");
        //print(&vet);
        time_t end = time(NULL);
        
        timer = end - begin;
        fprintf(file, "Insertion sort: \nTempo: %f s\nQuantidade de variáveis: 9", timer);
        fclose(file);
        printf("Fim da execucao!");
        return 0;
}
    

