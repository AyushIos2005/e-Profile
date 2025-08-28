#include <stdio.h>
#include <stdlib.h>

// Define struct Node
struct Node {
    int data;
    struct Node* next;
};

// Global pointers
struct Node* head = NULL;
struct Node* tail = NULL;

// Insert at front
void insert_front(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory Error!!\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = tail = newNode;
        return;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

// Insert at back
void insert_back(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory Error!!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Insert anywhere
void insert_anywhere(int val, int position) {
    if (position < 0) {
        printf("Invalid position\n");
        return;
    }
    if (position == 0) {
        insert_front(val);
        return;
    }

    struct Node* temp = head;
    for (int i = 0; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Position out of range\n");
            return;
        }
        temp = temp->next;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory Error!!\n");
        return;
    }
    newNode->data = val;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete from front
void delete_front() {
    if (head == NULL) {
        printf("\nLINKED LIST IS EMPTY!!\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    temp->next = NULL;
    free(temp);

    if (head == NULL) {
        tail = NULL; 
    }
}

// Delete from back
void delete_back() {
    if (head == NULL) {
        printf("\nLINKED LIST IS EMPTY!!\n");
        return;
    }

    if (head == tail) { 
        free(head);
        head = tail = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    free(tail);
    tail = temp;
    tail->next = NULL;
}

// Display linked list
void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main program
int main() {
    int choice, value, position;

    printf("Press 1 for INSERT at front\n");
    printf("Press 2 for INSERT at last\n");
    printf("Press 3 for INSERT at anywhere\n");
    printf("Press 4 for DELETE from front\n");
    printf("Press 5 for DELETE from last\n");
    printf("Press 6 for DISPLAY the list\n");
    printf("Press 7 for EXIT the program\n");

    while (1) {
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value for front: ");
                scanf("%d", &value);
                insert_front(value);
                break;

            case 2:
                printf("Enter a value for back: ");
                scanf("%d", &value);
                insert_back(value);
                break;

            case 3:
                printf("Enter a value for insert anywhere: ");
                scanf("%d", &value);
                printf("Enter a position: ");
                scanf("%d", &position);
                insert_anywhere(value, position);
                break;

            case 4:
                printf("A node is deleted from front!\n");
                delete_front();
                break;

            case 5:
                printf("A node is deleted from back!\n");
                delete_back();
                break;

            case 6:
                printf("Display list: ");
                display();
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice!! Try Again!!\n");
                break;
        }
    }

    return 0;
}
