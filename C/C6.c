#include<stdio.h>
int main(){
    int i,j,n;
    //1
    //A B
    //1 2 3
    printf("Please enter a number: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        int a = 1;
        for ( j = 1; j <= i; j++)
        {
            if(i%2==0){
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
            }else{
                printf("%d ",j);
            }
        }
            printf(" \n");
    }
    
    return 0;
}