#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};
struct Node *start_2151 = NULL;

void deleteAtPosition_2151(int pos) {
    if (pos < 1) {
        printf("Invalid position\n");
        return;
    }
    if (start_2151 == NULL) {
        printf("Underflow\n");
        return;
    }
    if (pos == 1) {
        struct Node *temp_2151 = start_2151;
        start_2151 = start_2151->link;
        free(temp_2151);
        return;
    }

    struct Node *ptr_2151 = start_2151;
    int i = 1;
    while (ptr_2151->link != NULL && i < pos - 1) {
        ptr_2151 = ptr_2151->link;
        i++;
    }
    if (ptr_2151->link == NULL) {
        printf("Position out of range\n");
        return;
    }

    struct Node *temp_2151 = ptr_2151->link;
    ptr_2151->link = temp_2151->link;
    free(temp_2151);
}


void displayList() {
    if (start_2151 == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *ptr_2151 = start_2151;
    while(ptr_2151 != NULL){
        printf("%d -> ", ptr_2151->data);
        ptr_2151 = ptr_2151->link;
    }
    printf("NULL\n");
}

int main() {
    struct Node* N1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* N2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* N3 = (struct Node*)malloc(sizeof(struct Node));

    N1->data = 11;
    N1->link = N2;

    N2->data = 22;
    N2->link = N3;

    N3->data = 33;
    N3->link = NULL;

    start_2151 = N1;

    deleteAtPosition_2151(2);
    displayList();

    return 0;
}



