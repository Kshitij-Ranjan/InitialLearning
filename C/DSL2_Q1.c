#include <stdio.h>

struct student {
    char name[20];
    int roll;
};
void display(char a[], int b);
int main() {
    struct student s1;
    printf("Enter name: ");
    fgets(s1.name, 20, stdin);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    display(s1.name, s1.roll);
    return 0;
}
void display(char a[], int b) {
    printf("\n");
    puts(a);
    printf("roll: %d\n", b);
}