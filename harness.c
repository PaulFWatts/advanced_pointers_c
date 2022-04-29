// Simple C program to display "Hello World"

// Header file for input output functions
#include <stdio.h>
#include "swap.c"

// main function -
// where the execution of program begins
int main()
{

    // prints hello world
    printf("Harness Driver:\n");

    // swap function call
    int a = 5, b = 7;

    printf("\nCalling Swap function\n");
    printf("num1 before swap = %d\n", a);
    printf("num2 before swap = %d\n", b);
    swap(a, b);
    printf("num1 after swap = %d\n", a);
    printf("num2 after swap = %d\n", b);

    printf("\nGoodbye!\n\n");

    return 0;
}
