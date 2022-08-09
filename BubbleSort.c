#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
   
    for(int i = 0; i < 8; i++){

        if(vet[i] >= vet[i+1]){
           swap(&vet[i], &vet[i+1]);
           
        }
    }

    n--;
    }

}

int main(){
    
    int vet[8];
    int n = sizeof(vet);
     
       for (int i = 0; i < 8; i++)
  {
    
    vet[i] = (rand() % 100);
  }

        for (int i = 0; i < 8; i++)
        {
            printf("%d ", vet[i]);
        }


    bubble(&vet, 8);

    printf("\n");
    for (int i = 0; i < 8; i++)
        {
            printf("%d ", vet[i]);
        }


}
