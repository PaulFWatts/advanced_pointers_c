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

    // printf("\nCalling Pointer Arithmetic\n");
    // pointer_arithmetic();

    /*
    Section:3 Lecture 15. Pointers Arithmetic - DIY Exercises

    int num = 30;
    int *p;

    printf("\n%d", num);
    p = &num;
    printf("\n%p", &num);
    printf("\n%p", p);
    *p = 20;
    printf("\n%d", num);
    */

    /*
    Section:3 Lecture 17. The “sizeof” Operator - Basic Exercises

    int grade = 80;
    printf("\n1.size of variable = %ld\n", sizeof(grade));

    double dgrade = 79.9;
    printf("\n2. size of variable = %ld\n", sizeof(dgrade));

    int grade1 = 80, grade2 = 90;
    printf("\n3. size of variable = %ld\n", sizeof(grade1 + grade2));

    int agrade1 = 80, agrade2 = 90;
    printf("\n4. size of variable = %ld\n", sizeof(agrade1) + sizeof(agrade2));

    printf("\n5. size pf double = %ld\n", sizeof(double));

    printf("\n6. size = %ld\n", sizeof(char));

    printf("\n7. size = %ld\n", sizeof(int));

    printf("\n8. size = %ld\n", sizeof(float));

    printf("\n9. size = %ld\n", sizeof('a'));

    printf("\n10. size = %ld\n", sizeof("a"));
    */

    printf("\n\nGoodbye\n\n");

    return 0;
}
