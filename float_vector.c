// ARQUIVO DE IMPLEMENTAÇOES
#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct float_vector{
    int capacity; //numero maximo de elementos
    int size; //quantidade atual de elementos
    float *data; //vetor de floats
};

/*
*@brief Cria (aloca) um vetor de float com uma dada capacidade
*@param tam Capacidade do vetor
*@return FloatVector* ponteiro de um vetor de floats
*/


FloatVector *create(int tam)
{

    FloatVector *vet = (FloatVector*)calloc(1, sizeof(FloatVector));
    vet ->size = 0; //está redundante pq o calloc foi usado. No caso de usar malloc, tem q por
    vet ->capacity = tam;
    vet->data = (float *)calloc(vet->capacity, sizeof(float));
    return vet;
}

void destroy (FloatVector **vet_ref)
{

    FloatVector *vet= vet_ref;
    free(vet->data);
    free(vet);
    *vet_ref = NULL;
}


int size(const FloatVector *vector)
{

    return vector ->size;

}

int capacity(const FloatVector *vector)
{

    return vector ->capacity;
}

float at(const FloatVector *vector, int pos)
{
    if(pos < 0 || pos >= vector->size)
    {
            fprintf(stderr, "Error: invalid position");
            fprintf(stderr, "\nIndex [%d] is out of bounds");
    
    }

}

void print(const FloatVector *vector)
{
    for (int i = 0; i < vector->size; i++) 
    {
        printf("[%d] = %f\n", i, vector->data[i]);
    }


}

void append(FloatVector *vector, float n) 
{
   
   // printf("teste 1 concluido\n");
    vector->data[vector->size] = n;
   // printf("teste 2 concluido\n");
    vector->size++;
   // printf("teste 3 concluido\n");

}

void swap(float *a, float *b)
{

            float aux = *b;
            *b = *a;
            *a = aux;

}


void bubble(const FloatVector *vetor, int tam_v)
{
  
   unsigned long int trocas = 0, comparacoes = 0;
   FILE *file;
   file = fopen("dados.txt", "a");
   
    for( int n = 0; n < tam_v - 1; n++)
    {
       bool swapped = false;
       //printf("Teste 2 completo\n");
       for(int i = 0; i < tam_v - 1; i++)
        {
            if(vetor->data[i] >= vetor->data[i+1])
            {
            //printf("%f\t", vetor->data[i]);
            swap(&vetor->data[i], &vetor->data[i+1]);
            swapped = true;
            trocas++;
            //printf("Teste 4 completo\n");
            }
            comparacoes++;
        }
        if(swapped == false)
            {
                //printf("BREAK\n");
                break;
            }
    //printf("Teste 5 completo\n");
        
    }
   fprintf(file, "\nBubble Sort\nTrocas: %d\nComparacoes: %d\nTamanho do vetor: %i\n\n", trocas, comparacoes, tam_v);
}   


void selectionSort(const FloatVector *vetor, int tam_v)
{
   unsigned long int trocas = 0, comparacoes = 0;
   FILE *file;
   file = fopen("dados.txt", "a");
    for(int i = 0; i < tam_v - 1; i++)
    {
        int menor  = i; 
        for(int j = i + 1; j < tam_v; j++)
        {
            if(vetor->data[j] < vetor->data[menor])
            {
                menor = j;
                comparacoes++;
            }
            
        }

       
            swap(&vetor->data[i], &vetor->data[menor]);
            trocas++;
            comparacoes++;


    }
   fprintf(file, "\nSelection Sort\nTrocas: %d\nComparacoes: %d\nTamanho do vetor: %i\n\n", trocas, comparacoes, tam_v);
}


void insertionSort(const FloatVector *vetor, int tam_v)
{
   unsigned long int Movimentacao = 0;
   FILE *file;
   file = fopen("dados.txt", "a");
    
    for (int i = 1; i < tam_v; i++) 
    {
        
        int j = i - 1;
        float n = vetor->data[i];
        
        while (j >= 0 && vetor->data[j] > n) {
            vetor->data[j + 1] = vetor->data[j];
            j = j - 1;
            Movimentacao++;
        }
        vetor->data[j + 1] = n;
    }
   fprintf(file, "\nInsertion Sort\nMovimentos: %d\nTamanho do vetor: %i\n\n", Movimentacao, tam_v);

}




void mergesort(const FloatVector *vetor, int inicio, int fim)
{

    if(inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;
        mergesort(vetor, inicio, meio);
        mergesort(vetor, meio + 1, fim); 
        merge(vetor, inicio, meio, fim);
    }

}

void merge(const FloatVector *vetor, int inicio, int meio, int fim)
{
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    float L[n1];
    float R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = vetor->data[inicio + i];
    }
    for (int i = 0; i < n2; i++)
    {
      R[i] = vetor->data[meio + 1 + i];
    }
    
    int i = 0, j = 0, k = inicio;
    
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            vetor->data[k] = L[i];
            i++;
        } else {
                    vetor->data[k] = R[j];
                    j++;
               }
        k++;

    }

    while( j < n2)
    {
        vetor->data[k] = R[j];
        j++;
        k++;
    }
    while( i < n1)
    {
        vetor->data[k] = L[i];
        i++;
        k++;
    }

}
