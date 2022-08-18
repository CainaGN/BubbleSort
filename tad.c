#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "float_vector.h"

int main(int argc, char const *argv[])
{
  int tam = argv[1];
  /* code */
  FloatVector *vetor = create(2);
  append(&vetor, 0.0);
  append(&vetor, 1.0);
  
  print(&vetor);
  return 0;
}
