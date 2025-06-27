#include <stdio.h>

int main() {
    int i,j;
    int a = 1;
    //Right angled Triangle of numbers also known as Floyd's triangle
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
        // for(j=5;j>=i;j--){
                printf(" %d",a);
                a =a+1;
        }
        printf(" \n");
    }
    return 0;
}
