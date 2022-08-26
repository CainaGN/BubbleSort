#include <stdio.h>
#include <stdlib.h>
#define tam_v 50000
void swap(int *a, int *b)
{
            int aux = *b;
            *b = *a;
            *a = aux;

}

void quicksort(int *vet, int init, int end)
{
    int pivot;
    if(end > init)
    {
        pivot = part(vet, init, end);
        quicksort(vet, init, pivot - 1);
        quicksort(vet, pivot + 1, end);
    }    
}

int part(int *vet, int init, int end)
{
    int l = init;
    int r = end;
    int pivot = vet[init];
    while(r > l)
    {
        while(vet[l] <= pivot && l <= end)
        {
            l++;
        }
        while(vet[r] > pivot && r >= init)
        {
            r--;
        }

        if(l < r)
        {
            swap(&vet[r], &vet[l]);
        }
    }
    vet[init] = vet[r];
    vet[r] = pivot;
    return r;
}


void print(int *vetor[])
{
        for (int i = 0; i < 50; i++)
        {
            printf("%d ", vetor[i]);
        }

}


int main ()
{

    int vet[tam_v];// = {5,3,6,9,8,7,1};
    printf("Inicializando...\n");
    
    for (int i = 0; i < tam_v; i++)
    {
        vet[i] = rand() %100;
    }
    
    int n = tam_v;
    quicksort(vet, 0, 50);
    print(&vet);

    return 0;
}