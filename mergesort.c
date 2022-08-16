#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAM 250000
int mergesort(int arr[], int inicio, int fim)
{

    if(inicio < fim)
    {
        int meio = inicio + (fim - inicio) / 2;
        mergesort(arr, inicio, meio);
        mergesort(arr, meio + 1, fim); 
        merge(arr, inicio, meio, fim);
    }

}

void merge(int arr[], int inicio, int meio, int fim)
{
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int L[n1];
    int R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[inicio + i];
    }
    for (int i = 0; i < n2; i++)
    {
      R[i] = arr[meio + 1 + i];
    }
    
    int i = 0, j = 0, k = inicio;
    
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        } else {
                    arr[k] = R[j];
                    j++;
               }
        k++;

    }

    while( j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    while( i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

}

void print(int vetor[]){
        for (int i = 0; i < TAM; i++)
        {
            printf("%d ", vetor[i]);
        }

}


int main (){

    float timer = 0.0;
    time_t begin = time(NULL);

    int arr[TAM];

    for (int i = 0; i < TAM; i++)
       {
         arr[i] = (rand() % 200);
        }

    mergesort(arr, 0, TAM - 1);
    
    time_t end = time(NULL);
        
    timer = (end - begin)/ CLOCKS_PER_SEC;
    
    //print(arr);
    printf("tempo de execucao: %f", timer);

    return 0;
}
