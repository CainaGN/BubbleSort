#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "float_vector.h"
#include "float_vector.c"
#define tam_v 50

int main()
{

  FloatVector *vetor = create(tam_v);
  float timer = 0.0;
    time_t begin = time(NULL);
    FILE *file;
    file = fopen("dados.txt", "a");


 for(int i = 0; i < tam_v; i++)
    {
      float value = (float)rand()/(float)(RAND_MAX/100);
      append(vetor, value);
    }
  
  print(vetor);
  printf("\nORDENANDO...\n\n");
  //bubble(vetor, tam_v);
  selectionSort(vetor, tam_v);
  //mergesort(vetor, 0, tam_v - 1); 
  print(vetor);

  time_t end = time(NULL);
        
    timer = end - begin;
    fprintf(file, "--------------------------", timer);
    fclose(file);
    printf("Fim da execucao!");

  return 0;
}
