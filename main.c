#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0
#define MIN_SIZE 2

typedef struct Stack
{
    int name[MIN_SIZE];
} Stack;


void init(Stack* s);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
bool isEmpty(const Stack* s);

int main() {
    Stack stack;
    init(stack);

    destroy(stack)
    return 0;
}