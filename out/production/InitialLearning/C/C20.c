<<<<<<< Updated upstream
// Functions
#include<stdio.h>

void greet(){
    int a,b,n;
    printf("Want to continue( 0 - no , 1 - yes )?");
    scanf("%d",&n);
    if (n == 1)
    {
        printf("Enter a numebr: ");
        scanf("%d%d", &a,&b);
        printf("Hello\n");
        printf("Good morning?\n");
        printf("How are you?\n");
        int x = a+b;
        return greet();
    }else{
        return;
    }
}

int main(){
    greet();
    return 0;
=======
// Functions
#include<stdio.h>

void greet(){
    int a,b,n;
    printf("Want to continue( 0 - no , 1 - yes )?");
    scanf("%d",&n);
    if (n == 1)
    {
        printf("Enter a numebr: ");
        scanf("%d%d", &a,&b);
        printf("Hello\n");
        printf("Good morning?\n");
        printf("How are you?\n");
        int x = a+b;
        return greet();
    }else{
        return;
    }
}

int main(){
    greet();
    return 0;
>>>>>>> Stashed changes
}