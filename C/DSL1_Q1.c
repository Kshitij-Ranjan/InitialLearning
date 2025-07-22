//
// Created by KSHITIJ RANJAN on 22/07/25.
//
#include<stdio.h>
//realloc()
//used to resize the size of the memory block which is already allocated by malloc or calloc
//it can be used in two scenario: 1. memory not sufficient 2. more memory than required
//int *ptr = (int *)malloc(5*sizeof(int))
//ptr = realloc(ptr, 10*sizeof(int))
void swapByReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Your number a is %d.\n", *x);
    printf("Your number b is %d.\n", *y);
}
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("The value after swapping is %d\n", a);
    printf("The value after swapping is %d\n", b);
}
int main() {
    int a = 3;
    int b = 4;
    swapByValue(a, b);
    printf("The value before swapping is %d\n", a);
    printf("The value before swapping is %d\n", b);
    swapByReference(&a, &b);
    return 0;
}

