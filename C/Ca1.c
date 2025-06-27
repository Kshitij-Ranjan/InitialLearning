<<<<<<< Updated upstream
#include<stdio.h>
// Sum of all numbers in the array
void add()
{
    int value[10];
    for(int i = 0;i<=9;i++)
    {
        printf("Enter number of index %d: ",i+1);
        scanf("%d",&value[i]);
    }
    for(int j =0;j<=9;j++)
    {
        value[j+1] = value[j]+value[j-1];
    }
    printf("Sum of all numbers in the array is %d",value[9]);
    return;
}

int main()
{
    add();
    return 0;
=======
#include<stdio.h>
// Sum of all numbers in the array
void add()
{
    int value[10];
    for(int i = 0;i<=9;i++)
    {
        printf("Enter number of index %d: ",i+1);
        scanf("%d",&value[i]);
    }
    for(int j =0;j<=9;j++)
    {
        value[j+1] = value[j]+value[j-1];
    }
    printf("Sum of all numbers in the array is %d",value[9]);
    return;
}

int main()
{
    add();
    return 0;
>>>>>>> Stashed changes
}