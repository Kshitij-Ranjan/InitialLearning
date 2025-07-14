<<<<<<< Updated upstream
#include<stdio.h>
// Smallest of all in an array
void add()
{
    int value[10],l;
    for(int i = 0;i<=9;i++)
    {
        printf("Enter number of index %d: ",i+1);
        scanf("%d",&value[i]);
    }
    l = value[0];
    for (int j = 1; j < 10; j++)
    {
        if (value[j] < l)
        {
            l = value[j];
        }
    }
    printf("%d is the samllest.",l);
    return;
}

int main()
{
    add();
    return 0;
}
=======
#include<stdio.h>
// Smallest of all in an array
void add()
{
    int value[10],l;
    for(int i = 0;i<=9;i++)
    {
        printf("Enter number of index %d: ",i+1);
        scanf("%d",&value[i]);
    }
    l = value[0];
    for (int j = 1; j < 10; j++)
    {
        if (value[j] < l)
        {
            l = value[j];
        }
    }
    printf("%d is the samllest.",l);
    return;
}

int main()
{
    add();
    return 0;
}
>>>>>>> Stashed changes
