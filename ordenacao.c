#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  
#include <stdbool.h>
#include "ordenacao.h"
#define size_v 50
void swap(int *a, int *b){

            int aux = *b;
            *b = *a;
            *a = aux;

}


void bubble(int *vetor[])
{
   int trocas = 0;

    for( int n = 0; n < size_v - 1; n++)
    {
       bool swapped = false;
    
    for(int i = 0; i < size_v - 1; i++)
        {

            if(vetor[i] >= vetor[i+1])
            {
            swap(&vetor[i], &vetor[i+1]);
            swapped = true;
            trocas++;
            }

        }
        if(swapped == false)
            {
                break;
            }
    
        
    }
        
   printf("\ntrocas: %d\n", trocas);
}

void selectionSort(int *vetor[]){

    for(int i = 0; i < size_v; i++){
        int menor  = i; // armazena apenas o índice
        for(int j = i; j < size_v; j++)
        {
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        swap(&vetor[i], &vetor[menor]);
    }

}

void insertionSort(int *vetor[])
{
    for (int i = 1; i < size_v; i++) 
    {
        
        int j = i - 1, n = vetor[i];
        
        while (j >= 0 && vetor[j] > n) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = n;
    }
}


void print(int *vetor[]){
        for (int i = 0; i < size_v; i++)
        {
            printf("%d ", vetor[i]);
        }

}


