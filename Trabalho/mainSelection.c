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

    selectionSort(&vet);

        printf("\n");
        //print(&vet);
        time_t end = time(NULL);
        
        timer = end - begin;
        fprintf(file, "Selection sort: \nTempo: %f s\nQuantidade de variáveis: 10", timer);
        fclose(file);
        printf("Fim da execucao!");
        return 0;
}
    

