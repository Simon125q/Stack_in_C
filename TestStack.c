#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

void test1(Stack * s, int num_of_tested_elem);
void test2(Stack * s, int num_of_tested_elem);

int main() {
    
    Stack test_stack;

    test1(&test_stack, 12);
    test2(&test_stack, 100);

    return 0;
}