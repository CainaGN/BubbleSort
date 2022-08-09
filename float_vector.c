// ARQUIVO DE IMPLEMENTAÇOES
#include "float_vector.h"
#include <stdio.h>
#include <stdlib.h>

struct float_vector{
    int capacity; //numero maximo de elementos
    int size; //quantidade atual de elementos
    float *data; //vetor de floats
    struct float_vector *next;
};

/*
*@brief Cria (aloca) um vetor de float com uma dada capacidade
*@param tam Capacidade do vetor
*@return FloatVector* ponteiro de um vetor de floats
*/


FloatVector *create(int tam){

    FloatVector *vet = (FloatVector*)calloc(1, sizeof(FloatVector));
    vet ->capacity = tam;
    vet ->size = 0; //está redundante pq o calloc foi usado. No caso de usar malloc, tem q por
    vet ->data = (float*)calloc(vet->capacity, sizeof(float));
    return vet;

}

void destroy (FloatVector **vet_ref){

    FloatVector *vet= vet_ref;
    free(vet->data);
    free(vet);
    *vet_ref = NULL;
}


int size(const FloatVector *vector){

    return vector ->size;

}

int capacity(const FloatVector *vector){

    return vector ->capacity;
}

float at(const FloatVector *vector, int pos){
    if(pos < 0 || pos >= vector->size){
            fprintf(stderr, "Error: invalid position");
            fprintf(stderr, "\nIndex [%d] is out of bounds");
    
    }

}

void print(const FloatVector *vector){
        float_vector* p;
        for(p = vector; p!= NULL; p = p->next){
            printf("%f\n", p->data);
        }


}