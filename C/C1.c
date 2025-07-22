#include<stdio.h>

int main()
{       
        //To check if the number is odd or even
        int p,q;
        printf("Please enter a number: ");
        scanf("%d",&p);
        q=p%2;

        if(p == 0)
        {
                printf("Your number is 0.\n");
        }
        else if (q == 0)
        {
                printf("Your number is even.\n");
        }
        else{
                printf("Your number is odd.\n");
        }
        return 0;
}   