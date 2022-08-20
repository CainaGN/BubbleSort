#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "float_vector.h"
#include "float_vector.c"
#define tam_v 100

int main(int argc, char const *argv[])
{
  int tam = (int)argv[1];
  /* code */
  FloatVector *vetor = create(tam_v);
  
  
 /* append(vetor, 7.0);
  append(vetor, 1.0);
  append(vetor, 6.0);
  append(vetor, 3.0);
  append(vetor, 4.0);
  append(vetor, 5.0);
  append(vetor, 8.0);*/
 for(int i = 0; i < tam_v; i++)
    {
      float value = (float)rand()/(float)(RAND_MAX/100);
      append(vetor, value);
    }
  
  print(vetor);
  printf("\nORDENANDO...\n\n");
 
  mergesort(vetor, 0, tam_v - 1); 


  print(vetor);
  return 0;
}
