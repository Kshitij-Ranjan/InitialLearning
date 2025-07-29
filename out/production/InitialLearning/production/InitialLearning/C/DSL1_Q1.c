#include <stdio.h>

void compareByAddress(int *x, int *y) {
    if (*x > *y) {
        printf("Number %d is greater than %d.\n", *x, *y);
    } else if (*x < *y) {
        printf("Number %d is greater than %d.\n", *y, *x);
    } else {
        printf("Both numbers are equal: %d and %d.\n", *x, *y);
    }
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    compareByAddress(&a, &b);
    return 0;
}
