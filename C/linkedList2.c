//insert at last position in a SLL

#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};
struct Node *start = NULL;

struct Node *createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = NULL;
    return newNode;
}

void insertAtLast(struct Node *SLL, int key) {
    struct Node * newNode;
    newNode = createNode(key);
    newNode->data = key;
    if (start == NULL) {
        start = newNode;
        return;
    }
    newNode->link = NULL;
    struct Node *ptr = start;
    while(ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = newNode;
}

void displayList() {
    struct Node *temp = start;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
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

    start = N1;

    insertAtLast(start, 44);
    displayList();

    return 0;
}
