#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* start = NULL;

struct Node* createNode_2151(int value) {
    struct Node* newNode_2151 = (struct Node*) malloc(sizeof(struct Node));
    newNode_2151->data = value;
    newNode_2151->next = NULL;
    return newNode_2151;
}

void insertAtBegining(int value) {
    struct Node* newNode_2151 = createNode_2151(value);
    newNode_2151->next = start;
    start = newNode_2151;
    printf("Inserted %d at the beginning \n", value);
}

void insertAtEnd(int value) {
    struct Node* newNode_2151 = createNode_2151(value);
    if (start == NULL) {
        start = newNode_2151;
    } else {
        struct Node* temp_2151 = start;
        while (temp_2151->next != NULL) {
            temp_2151 = temp_2151->next;
        }
        temp_2151->next = newNode_2151;
    }
    printf("Inserted %d at the end\n", value);
}

void insertAtPosition(int value, int position) {
    if (position < 1) {
        printf("Position should be >= 1.\n");
        return;
    }

    if (position == 1) {
        insertAtBegining(value);
        return;
    }

    struct Node* newNode_2151 = createNode_2151(value);
    struct Node* temp_2151 = start;

    for (int i = 1; i < position - 1; i++) {
        if (temp_2151 == NULL) {
            printf("invalid position\n");
            free(newNode_2151);
            return;
        }
        temp_2151 = temp_2151->next;
    }

    if (temp_2151 == NULL) {
        printf("invalid position\n");
        free(newNode_2151);
        return;
    }

    newNode_2151->next = temp_2151->next;
    temp_2151->next = newNode_2151;
    printf("Inserted %d at position %d.\n", value, position);
}

void afterAnyData(int value, int givenData) {
    struct Node* newNode_2151 = createNode_2151(value);

    if (start == NULL) {
        printf("List is empty. Cannot insert after %d.\n", givenData);
        free(newNode_2151);
        return;
    }

    struct Node* temp = start;
    // no multiple data
    //get to position of given data
    while (temp != NULL && temp->data != givenData) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", givenData);
        free(newNode_2151);
        return;
    }

    newNode_2151->next = temp->next;
    temp->next = newNode_2151;

    printf("Inserted %d after %d.\n", value, givenData);
}


void displayList() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp_2151 = start;
    printf("Linked List: ");
    while (temp_2151 != NULL) {
        printf("%d -> ", temp_2151->data);
        temp_2151 = temp_2151->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, value, position, givenData;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Insert after any given data\n");
        printf("5. Display list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtBegining(value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtPosition(value, position);
            case 4:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter data: ");
                scanf("%d", &givenData);
                afterAnyData(value, givenData);
                break;
            case 5:
                displayList();
                break;
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
