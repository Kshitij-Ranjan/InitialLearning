<<<<<<< Updated upstream
#include<stdio.h>
// Greatest of all in an array
void add()
{
    int value[10],l;
    for(int i = 0;i<=9;i++)
    {
        printf("Enter number of index %d: ",i+1);
        scanf("%d",&value[i]);
    }
    for(int j =0;j<=9;j++)
    {
        for(int k = 0;k<=9;k++)
        {
            if (value[j]>=value[k])
            {
                l = value[j];
            }
            
        }
    }
    printf("%d is the greatest.",l);
    return;
}

int main()
{
    add();
    return 0;
}
=======
#include<stdio.h>
// Greatest of all in an array
void add()
{
    int value[10],l;
    for(int i = 0;i<=9;i++)
    {
        printf("Enter number of index %d: ",i+1);
        scanf("%d",&value[i]);
    }
    for(int j =0;j<=9;j++)
    {
        for(int k = 0;k<=9;k++)
        {
            if (value[j]>=value[k])
            {
                l = value[j];
            }
            
        }
    }
    printf("%d is the greatest.",l);
    return;
}

int main()
{
    add();
    return 0;
}
>>>>>>> Stashed changes
