#include <stdio.h>

struct student{char name[20];int roll; char branch[15];};
void display(struct student *);
int main() {
    struct student s1;
    printf("Enter Name : ");
    fgets(s1.name, 20, stdin);
    printf("Enter roll : ");
    scanf("%d", &s1.roll);
    printf("Enter Branch : ");
    scanf("%s", s1.branch);
    display(&s1);
    return 0;
}
void display(struct student *s) {
    printf("\nName : %s", s->name);
    printf("\nRoll : %d", s->roll);
    printf("\nBranch : %s", s->branch);
}