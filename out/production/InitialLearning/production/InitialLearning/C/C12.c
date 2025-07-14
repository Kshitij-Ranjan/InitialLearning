#include<stdio.h>
int main(){
    // To make a rhombus 
    int i,j,n,a;
    printf("Please enter numeber: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for(j=1;j<=n;j++){
            if (i+j>=n+1 )
            {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        for(a=n;a>=i;a--){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}