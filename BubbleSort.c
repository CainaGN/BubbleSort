
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size_v 1000
#include <time.h>  
/*
quantidade de trocas
quanti variáveis
quantidade de comparaçoes
*/

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

int main(){
    
    int vet[size_v];
    int n = sizeof(vet);
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


    bubble(&vet, size_v);

    printf("\n");
    /*for (int i = 0; i < size_v; i++)
        {
            printf("%d ", vet[i]);
        }*/

        time_t end = time(NULL);
        
        timer = end - begin;
        printf("\ntime: %f ms\n", timer);
        
        return 0;
}

