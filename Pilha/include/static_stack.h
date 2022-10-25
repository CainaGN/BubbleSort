#ifndef STATIC_STACK
#define STATIC_STACK

#include <stdbool.h>

typedef struct _static_stack StaticStack;

StaticStack *StaticStack_create(long capacity);

void StaticStack_destroy(StaticStack **s_stack);

bool StaticStack_isEmpty(const StaticStack *S);

bool StaticStack_isFull(const StaticStack *S);

long StaticStack_size(const StaticStack *S);  //**

void StaticStack_push(StaticStack *S, long value);

int StaticStaxk_peek(StaticStack *S); //** retornar o elemento que está no topo

int StaticStaxk_pop(StaticStack *S);

long StaticStack_print(const StaticStack *S) //**


#endif