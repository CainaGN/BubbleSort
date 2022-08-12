#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  
#include <stdbool.h>
#include "ordenacao.h"
#define size_v 500000
void swap(int *a, int *b){

            int aux = *b;
            *b = *a;
            *a = aux;

}


void bubble(int *vetor[])
{
   unsigned long int trocas = 0, comparacoes = 0;
   FILE *file;
   file = fopen("dados.txt", "a");
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
            comparacoes++;
        }
        if(swapped == false)
            {
                break;
            }
    
        
    }
        
   fprintf(file, "\nTrocas: %d\nComparacoes: %d\nTamanho do vetor: %i\n\n", trocas, comparacoes, size_v);
}   
   void selectionSort(int *vetor[]){
   unsigned long int trocas = 0, comparacoes = 0;
   FILE *file;
   file = fopen("dados.txt", "a");
    for(int i = 0; i < size_v - 1; i++){
        int menor  = i; 
        for(int j = i + 1; j < size_v; j++)
        {
            if(vetor[j] < vetor[menor]){
                menor = j;
                comparacoes++;
            }
            
            if(menor != i){
            swap(&vetor[i], &vetor[menor]);
            trocas++;
            comparacoes++;
            }
        }

    }
   fprintf(file, "\nTrocas: %d\nComparacoes: %d\nTamanho do vetor: %i\n\n", trocas, comparacoes, size_v);
}

void insertionSort(int *vetor[])
{
   unsigned long int Movimentacao = 0;
   FILE *file;
   file = fopen("dados.txt", "a");
    
    for (int i = 1; i < size_v; i++) 
    {
        
        int j = i - 1, n = vetor[i];
        
        while (j >= 0 && vetor[j] > n) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
            Movimentacao++;
        }
        vetor[j + 1] = n;
    }
   fprintf(file, "\nMovimentos: %d\nTamanho do vetor: %i\n\n", Movimentacao, size_v);

}


void print(int *vetor[]){
        for (int i = 0; i < size_v; i++)
        {
            printf("%d ", vetor[i]);
        }

}


