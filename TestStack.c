#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

void test1(int num_of_tested_elem);
void test2(int num_of_tested_elem);
void test3();
void test4(int num_of_tested_elem);

int main()
{

    test1(19);
    test2(21);
    test3();
    test4(10);

    return 0;
}

void test1(int num_of_tested_elem)
{
    printf("TEST 1\n");
    Stack s;
    init(&s);

    isEmpty(&s);

    for (int num = 0; num < num_of_tested_elem; num++)
    {
        push(&s, num);
        // printf("Pushed %d\n", num);
    }

    isEmpty(&s);

    for (int num = 0; num < num_of_tested_elem; num++)
    {
        int poped_elem = pop(&s);
        printf("Poped element %d\n", poped_elem);
    }

    isEmpty(&s);

    destroy(&s);
}

void test2(int num_of_tested_elem)
{
    printf("TEST 2\n");
    Stack s;
    init(&s);

    isEmpty(&s);

    for (int num = 0; num < num_of_tested_elem; num++)
    {
        push(&s, num);
    }

    isEmpty(&s);

    destroy(&s);
}

void test3()
{
    printf("TEST 3\n");
    Stack s;
    init(&s);

    destroy(&s);
}

void test4(int num_of_tested_elem)
{
    printf("TEST 4\n");
    Stack s;
    init(&s);

    isEmpty(&s);

    for (int num = 0; num < num_of_tested_elem; num++)
    {
        push(&s, num);
    }

    isEmpty(&s);

    for (int num = 0; num < num_of_tested_elem + 1; num++)
    {
        int poped_elem = pop(&s);
        printf("Poped element %d\n", poped_elem);
    }

    isEmpty(&s);

    destroy(&s);
}