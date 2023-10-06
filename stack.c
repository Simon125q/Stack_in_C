#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define INITIAL_SIZE 2
#define STACK_GROWTH_RATE 2

void init(Stack* s) {
    s->size = INITIAL_SIZE;
    s->top_index = 0;
    s->data = (int *) malloc(s->size * sizeof(int));
    printf("Memory allocated\n");
}

void destroy(Stack* s) {
    s->top_index = -1;
    free(s->data);
}

void push(Stack* s, int element) {
    if (s->size <= s->top_index){
        s->size *= STACK_GROWTH_RATE;
        s->data = (int *) realloc(s->data, s->size * sizeof(int));
        printf("Memory reallocated\n");
    }
}

int pop(Stack* s);
bool isEmpty(const Stack* s);