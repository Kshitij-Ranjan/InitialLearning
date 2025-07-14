#include<stdio.h>
int main(){
    int i,j,a,n;
    printf("Please insert a number: ");
    scanf("%d",&n);
    a=(n/2)+1;
    //     *
    // *   *   *
    //     * 
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i==a || j==a)
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