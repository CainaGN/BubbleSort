#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
quantidade de trocas
quanti variáveis
quantidade de comparaçoes
*/


int main(){
    
    int vet[8];
    int aux;
    int n = sizeof(vet);
     
       for (int i = 0; i < 8; i++)
  {
    
    vet[i] = (rand() % 100);
  }

        for (int i = 0; i < 8; i++)
        {
            printf("%d ", vet[i]);
        }


    while ( n > 0)
    {
   
    for(int i = 0; i < 8; i++){

        if(vet[i] >= vet[i+1]){
            aux = vet[i+1];
            vet[i + 1] = vet[i];
            vet[i] = aux;
        }
    }

    n--;
    }

    printf("\n");
 for (int i = 0; i < 8; i++)
        {
            printf("%d ", vet[i]);
        }


}
