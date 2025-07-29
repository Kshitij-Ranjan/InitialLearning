
#include <stdio.h>

struct person {char name[20];int age;};
struct person employees();
int main() {
    struct person pe = employees();
    printf("Name : %s",pe.name);
    printf("Age : %d",pe.age);
    return 0;
}
struct person employees() {
    struct person p1;
    printf("Name : ");
    scanf("%s",p1.name);
    printf("\nAge : ");
    scanf("%d",&p1.age);
    return p1;
}