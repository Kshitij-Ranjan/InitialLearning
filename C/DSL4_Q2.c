#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *createNode_2151(int data){
    struct Node *newNode_2151 = (struct Node *)malloc(sizeof(struct Node));
    newNode_2151->data = data;
    newNode_2151->link = NULL;
    return newNode_2151;
}

struct Node *start_2151 = NULL;

void insertAtPosition_2151(int key, int pos) {
    if(pos < 1) {
        printf("Invalid position\n");
        return;
    }
    struct Node *newNode_2151 = createNode_2151(key);
    if (start_2151 == NULL) {
        newNode_2151->link = newNode_2151;
        start_2151 = newNode_2151;
        return;
    }
    if(pos == 1){
        newNode_2151->link = start_2151;
        struct Node *temp_2151 = start_2151;
        while(temp_2151->link != start_2151) {
            temp_2151 = temp_2151->link;
        }
        temp_2151->link = newNode_2151;
        start_2151 = newNode_2151;
        return;
    }
    else{
        struct Node *ptr_2151 = start_2151;
        int count = 1;
        while (ptr_2151->link != start_2151 && count != pos - 1) {
            ptr_2151 = ptr_2151->link;
            count++;
        }
        newNode_2151->link = ptr_2151->link;
        ptr_2151->link = newNode_2151;
    }

}


void displayList() {
    if (start_2151 == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *ptr_2151 = start_2151;
    do {
        printf("%d -> ", ptr_2151->data);
        ptr_2151 = ptr_2151->link;
    } while (ptr_2151 != start_2151);
    printf("(back to start)\n");
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
    N3->link = N1;

    start_2151 = N1;

    insertAtPosition_2151(66,1);
    displayList();

    return 0;
}



