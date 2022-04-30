// Simple C program to display "Hello World"

// Header file for input output functions
#include <stdio.h>
#include <stdlib.h>
#include "my_library.c"

// main function -
// where the execution of program begins

void swap_function()
{
    /* Swap Function (Pass by Value)
    Problem: The void function is using "pass by value" so the values are swapped in the called function but not
    changed in the main program.
    */

    int a = 5, b = 7;

    printf("num1 before swap = %d\n", a);
    printf("num2 before swap = %d\n", b);
    swap(a, b);
    printf("num1 after swap = %d\n", a);
    printf("num2 after swap = %d\n", b);
}
void FindMinMax_function()
{
    // findMax & findMin Function (Pass by Value)

    int d = 5, e = 7;
    int max, min;

    findMinMax(d, e, &max, &min);
    printf("max between %d and %d is %d\n", d, e, max);
    printf("min between %d and %d is %d\n", d, e, min);
}

void pointer_usage()
{
    /* Pointer Usage
    Demonstrates the use of pointers in C.
    */

    int c = 5;
    int *ptr = &c;
    printf("c = %d\n", c);
    printf("*ptr = %d\n", *ptr);
    *ptr = 7;
    printf("*ptr = %d\n", *ptr);
    printf("c = %d\n", c);
}

void value_address()
{
    // Printing value and address of standard variables

    int grade1 = 80, grade2 = 90, grade3 = 100;
    printf("grade1 = %d\n", grade1);
    printf("grade2 = %d\n", grade2);
    printf("grade3 = %d\n", grade3);
    printf("&grade1 = %p\n", &grade1);
    printf("&grade2 = %p\n", &grade2);
    printf("&grade3 = %p\n", &grade3);
}

void pointer_arithmetic()
{
    int *ptr;
    int grades[3] = {80, 90, 100};
    printf("\ngrades[0] start at: %p\n", grades);
    printf("grades[0]: %d\n", *grades);
    printf("address: %p\n", &grades[0]);
    printf("grades[1] starts at:%p\n", grades + 1); // pointer arithmetic
    printf("grades[1]: %d\n", *(grades + 1));       // pointer arithmetic
    printf("address: %p\n", &grades[1]);
}

int main()
{

    printf("\nHarness Driver:\n");

    // printf("\nCalling Swap function\n");
    // swap_function();

    // printf("\nCalling Unified findMinMax function\n");
    // FindMinMax_function();

    // printf("\nCalling Pointer Usage\n");
    // pointer_usage();

    // printf("\nCalling Pointer Usage\n");
    // value_address();

    printf("\nCalling Pointer Arithmetic\n");
    pointer_arithmetic();

    printf("\n\nGoodbye\n\n");

    return 0;
}
