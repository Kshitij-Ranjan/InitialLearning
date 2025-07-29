#include <stdio.h>
#include <stdlib.h>

struct point{int x,y;};
struct point *fun(int a,int b) {
    struct point *ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b;
    return ptr;
}
void display(struct point *p1) {
    printf("%d,%d",p1->x,p1->y);
}
int main() {
    struct point *pt1,*pt2;
    pt1 = fun(2,3);
    pt2 = fun(6,9);
    display(pt1);
    printf("\n");
    display(pt2);
    printf("\n");
    free(pt1);
    free(pt2);
    return 0;
}