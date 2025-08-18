#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *start_2151 = NULL;

struct Node *createNode_2151(int data){
    struct Node *newNode_2151 = (struct Node *)malloc(sizeof(struct Node));
    newNode_2151->data = data;
    newNode_2151->link = NULL;
    return newNode_2151;
}

void deleteByValue_2151(int key) {
    if (start_2151 == NULL) {
        printf("Underflow\n");
        return;
    }
    struct Node *ptr_2151 = start_2151;
    if (ptr_2151->link == start_2151 && ptr_2151->data == key) {
        free(ptr_2151);
        start_2151 = NULL;
        return;
    }
    if (start_2151->data == key) {
        while (ptr_2151->link != start_2151) {
            ptr_2151 = ptr_2151->link;
        }
        struct Node *temp_2151 = start_2151;
        ptr_2151->link = start_2151->link;
        start_2151 = start_2151->link;
        free(temp_2151);
        return;
    }
    else{
        while (ptr_2151->link != start_2151 && ptr_2151->link->data != key) {
            ptr_2151 = ptr_2151->link;
        }
        if (ptr_2151->link == start_2151) {
            printf("Value %d not found in the list.\n", key);
        } else {
            struct Node *temp_2151 = ptr_2151->link;
            ptr_2151->link = temp_2151->link;
            free(temp_2151);
        }
    }
}
void displayList() {
    if (start_2151 == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *ptr_2151 = start_2151;
     while(ptr_2151 != start_2151);{
        printf("%d -> ", ptr_2151->data);
        ptr_2151 = ptr_2151->link;
    }
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

    displayList();
    deleteByValue_2151(33);
    displayList();
    deleteByValue_2151(11);
    displayList();
    deleteByValue_2151(100);
    displayList();

    return 0;
}
