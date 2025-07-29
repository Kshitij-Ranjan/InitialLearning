#include <stdio.h>

struct point{int x,y;};
void display(struct point *p) {
    printf("%d %d\n",p->x,p->y);
}
int main() {
    struct point p1 = {23,45};
    struct point p2 = {56,90};
    display(&p1);
    display(&p2);
    return 0;
}