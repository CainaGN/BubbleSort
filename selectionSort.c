#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>  
#include <stdbool.h>
#define size_v 10
void swap(int *a, int *b){

            int aux = *b;
            *b = *a;
            *a = aux;

}


void bubble(int *vet[])
{
   int trocas = 0;

    for( int n = 0; n < size_v - 1; n++)
    {
       bool swapped = false;
    
    for(int i = 0; i < size_v - 1; i++)
        {

            if(vet[i] >= vet[i+1])
            {
            swap(&vet[i], &vet[i+1]);
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


void print(int *vetor[]){
        for (int i = 0; i < size_v; i++)
        {
            printf("%d ", vetor[i]);
        }

}

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

    printf("\n");
    print(&vet);
        time_t end = time(NULL);
        
        timer = end - begin;
        printf("\ntime: %f ms\n", timer);
        
        return 0;
}

