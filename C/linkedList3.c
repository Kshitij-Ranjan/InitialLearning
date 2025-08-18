//insert at any given position in a SLL

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

void insertAtPosition( int key, int pos) {
    struct Node *newNode = createNode(key);
    if (pos < 1) {
        printf("Position should be >= 1\n");
        return;
    }
    
    if (pos == 1) {
        newNode->link = start;
        start = newNode;
        return;
    }
    else{
        struct Node *ptr = start;
        int count = 1;
        while (ptr->link != NULL && count != pos - 1) {
            ptr = ptr->link;
            count++;
        }
        
        newNode->link = ptr->link;
        ptr->link = newNode;
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

    N3->data = 44;
    N3->link = NULL;

    start = N1;

    insertAtPosition(33, 3);
    displayList();

    return 0;
}
