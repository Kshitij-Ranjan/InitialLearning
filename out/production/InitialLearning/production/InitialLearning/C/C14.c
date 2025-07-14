#include<stdio.h>
int main(){
int n,k;
printf("Enter the value of n: ");
scanf("%d",&n); // 1234
int sum = 0 ;
int last ;
while(n>0){
   last = n%10;
    if(last%2!=0) continue;
    sum = sum + last;
} n = n / 10;

printf("The sum of all the even digits are %d",sum);
return 0;
}