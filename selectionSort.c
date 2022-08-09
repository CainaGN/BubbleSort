
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size_v 1000
#include <time.h>  

void swap(int *a, int *b){

            int aux = *b;
            *b = *a;
            *a = aux;

}


void bubble(int *vet[], int size)
{
  int n = size;

    while ( n > 0)
    {
   
    for(int i = 0; i < size_v; i++){

        if(vet[i] >= vet[i+1]){
           swap(&vet[i], &vet[i+1]);
           
        }
    }

    n--;
    }

}




void selectionSort(int *vetor[], int size){

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


void print(int *vetor[]){
        for (int i = 0; i < size_v; i++)
        {
            printf("%d ", vetor[i]);
        }

}

int main(){
    
    int vet[size_v];
    double timer = 0.0;
    time_t begin = time(NULL);



       for (int i = 0; i < size_v; i++)
  {
    
    vet[i] = (rand() % 100);
  }

      /*  for (int i = 0; i < size_v; i++)
        {
            printf("%d ", vet[i]);
        }*/


    selectionSort(&vet, size_v);

    printf("\n");
    print(&vet);
        time_t end = time(NULL);
        
        timer = end - begin;
        printf("\ntime: %f ms\n", timer);
        
        return 0;
}

