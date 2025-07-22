#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i, n = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    return 0;
}
