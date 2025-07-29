#include <stdio.h>

struct student{char name[20];int roll;};
void display(struct student st[]);
int main() {
    struct student stu[3]={{"ABC",10},{"XYZ",20},{"MNP",30}};
    display(stu);
    return 0;
}
void display(struct student st[]) {
    int i;
    for(i=0;i<3;i++) {
        printf("\nName : %s",st[i].name);
        printf("\nRoll : %d",st[i].roll);
        printf("\n");
    }
}