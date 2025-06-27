#include <stdio.h>

int main()
{   
    //To check if the number is divisible by 5 & 3
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Insert point 1 (x1,y1): \n");
    scanf("%d %d",&x1,&y1);
    printf("Insert point 2 (x2,y2): \n");
    scanf("%d %d",&x2,&y2);
    printf("Insert point 3 (x3,y3): \n");
    scanf("%d %d",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    printf("First slope is %d \n",m1);
    printf("Second slope is %d \n",m2 );
    if(m1==m2){
        printf("All three points lie on the same line.\n");
    } else {
        printf("All three points do not lie on the same line.\n");
    }
    return 0;
}
