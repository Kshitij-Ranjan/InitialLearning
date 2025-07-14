#include<stdio.h>
int main(){
    //To make a triangle like this
//          * 
//        * *
//      * * *
//    * * * *
//  * * * * *        
    int i,j,n,a;
    printf("Please enter a numeber: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if (i+j>=n+1 )
            {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}