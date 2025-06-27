#include<stdio.h>
int main(){
    int i,j,n;
    // To make a star cross
    printf("Please insert an odd number: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if ((i==j) || i+j==n+1)
            {
                printf(" *");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");   
    }
    return 0;
}