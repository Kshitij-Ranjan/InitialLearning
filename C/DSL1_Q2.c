#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* createArr(int n) {
    int* arr = (int*)malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Memory allocation failed for arr\n");
        exit(EXIT_FAILURE);
    }
    return arr;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int sumOfPrimes(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    int i;
    int* arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = createArr(n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sum = sumOfPrimes(arr, n);
    printf("Sum of prime elements = %d\n", sum);
    free(arr);
    return 0;
}
