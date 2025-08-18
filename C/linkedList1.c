//insert at first position in a SLL

#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};
struct Node *start = NULL;

void insertAtBeginning(struct Node *SLL) {
    struct Node * newNode;
    int x;
    printf("Enter value to be inserted (-1 to exit): ");
    scanf("%d", &x);

    while (x != -1) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->link = start;  // point to old start
        start = newNode;        // new node becomes start

        printf("Enter value to be inserted (-1 to exit): ");
        scanf("%d", &x);
    }
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

    insertAtBeginning(start);
    displayList();

    return 0;
}
