#pragma once

typedef struct Stack {
    int top_index;
    int size;
    int * elements;
} Stack;

void init(Stack* s);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
bool isEmpty(Stack* s);
void checkAllocation(Stack* s);