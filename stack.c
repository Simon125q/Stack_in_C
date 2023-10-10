#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define INITIAL_SIZE 2
#define STACK_GROWTH_RATE 2

void init(Stack* s) {
    s->top_index = 0;
    s->size = INITIAL_SIZE;
    s->elements = (int *) malloc(s->size * sizeof(int));
    checkAllocation(s);
    printf("Stack created, memory allocated\n");
}

void destroy(Stack* s) {
    if (s->top_index < 0) {
        printf("Stack is already destroyed\n");
        //free(s->elements);
        abort();
    }
    s->top_index = -1;
    free(s->elements);
    printf("Stack destroyed\n");
}

void push(Stack* s, int element) {
    if (s->size <= s->top_index){
        s->size *= STACK_GROWTH_RATE;
        s->elements = (int *) realloc(s->elements, s->size * sizeof(int));
        printf("Memory reallocated\n");
        checkAllocation(s);
    }
    
    s->elements[s->top_index++] = element;
    printf("Element %d pushed to stack\n", element);
}

int pop(Stack* s) {
    if (!isEmpty(s)){
        s->top_index--;
        int element = s->elements[s->top_index];
        return element;
    }
    else {
        printf("Stack is empty\n");
        destroy(s);
        //free(s->elements);
        abort();
    }
}

bool isEmpty(Stack* s) {
    if (s->top_index < 0) {
        printf("Stack doesnt exist");
        abort();
    }
    else if (s->top_index == 0) {
        return true;
    }
    else return false;
}

void checkAllocation(Stack* s) {
    if (s->elements == NULL) {
        printf("Allocation error\n");
        abort();
    }
}