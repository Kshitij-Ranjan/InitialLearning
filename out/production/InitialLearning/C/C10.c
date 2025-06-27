#include <stdio.h>

int main() {
    int i,j;
    int a;
    //Triangle of binary numbers like this
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    for(i=1;i<=4;i++){
        if(i%2!=0){
            a=1;
        } else {
            a=0;
        }
        for(j=1;j<=i;j++){
                printf(" %d",a);
                if(a==0){
                    a=1;
                } else{
                    a=0;
                }
        }
        printf(" \n");
    }
    return 0;
}