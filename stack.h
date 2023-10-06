#pragma once

typedef struct Stack {
    int size;
    int top_index;
    int * data;
} Stack;

void init(Stack* s);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
bool isEmpty(const Stack* s);