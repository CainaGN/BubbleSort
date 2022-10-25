#include "../include/static_stack.h"

#include <stdlib.h>
#include <stdio.h>

typedef struct _static_stack 
{
    int *data;
    long capacity;
    long top;
} StaticStack;


StaticStack *StaticStack_create(long capacity)
{
    StaticStack *S = (StaticStack *)calloc(1, sizeof(StaticStack));

    S->capacity = capacity;
    S->top = -1;
    S->data = (int*)calloc(S->capacity, sizeof(int));

    return S;
}


void StaticStack_destroy(StaticStack **s_stack)
{
    StaticStack *S = *s_stack;
    free(S->data);  
    free(S);
    s_stack = NULL;
}


bool StaticStack_isEmpty(const StaticStack *S)
{
        return S->top == -1;
}

bool StaticStack_isFull(const StaticStack *S)
{
    return S->top == S->capacity - 1;
}

void StaticStack_push(StaticStack *S, long value)
{
    //verificar se está cheio 
    //printar mensagem de erro
    S->top++;
    S->data[S->top] = value;
}

int StaticStaxk_pop(StaticStack *S)
{
    //veririfcar se está vazia
    //print msg de erro

    int aux = S->data[S->top];
    S->top--;

    return aux;
}

// organizar e reorganizar as coisas em uma lista, tipo hanoi