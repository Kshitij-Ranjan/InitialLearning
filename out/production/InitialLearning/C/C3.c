#include<stdio.h>
int main ()
{
    // Table of any number
    int i,n;
    printf("Please inser a number: ");
    scanf("%d",&n);
    for ( i = 1; i <= (n*10); i++)
    {
        if(i%n==0){
            printf("%d \n",i);
        }
    }
    
    return 0;
}