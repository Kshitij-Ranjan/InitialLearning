#include<stdio.h>
int main()
{   
    //To check if an integer is prime or not
    int m,n,x;
    printf("Please enter a number other than 0 and 1: \n");
    scanf("%d",&n);
    x = n%5;
    if(n%2 != 0 && n%5 != 0){
        for(m = 3 ; m < n ; m ++){
            if(m != 0 && m != 1 && n%m == 0){
                printf("Its divisible by %d\n",m);
                printf("Your number is not prime.");
                break;
            } else {
            printf("Your number is prime.");
            break;
            } 
        }
    } else if (n == 2 || n == 5) {
        printf("Your number is prime.");
    } else if (x == 0 && x != 5) {
        printf("Its divisible by 5\n");
        printf("Your number is not prime.");  
    }    
    else {
        printf("Its divisible by 2\n");
        printf("Your number is not prime.");
    }
    return 0;    
}