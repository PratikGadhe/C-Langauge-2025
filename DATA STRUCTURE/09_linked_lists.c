/*
Question 9: Write programs to implement the following data structures:
(a) Single linked list
(b) Double linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// 1. Insert at head
void insertAtHead(int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at head\n", value);
}

// 2. Insert at last
void insertAtLast(int value) {
    struct Node* newNode = createNode(value);
    
    if (head == NULL) {
        head = newNode;
        printf("Inserted %d at last\n", value);
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    printf("Inserted %d at last\n", value);
}

// 3. Insert at intermediate position
void insertAtPosition(int value, int position) {
    struct Node* newNode = createNode(value);

    if (position == 1) {  // insert at head
        newNode->next = head;
        head = newNode;
        printf("Inserted %d at position %d\n", value, position);
        return;
    }

    struct Node* temp = head;
    int i;
    for (i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Inserted %d at position %d\n", value, position);
    }
}

// 4. Delete a node
void deleteNode(int value) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;

    // If head is to be deleted
    if (head->data == value) {
        head = head->next;
        free(temp);
        printf("Deleted %d\n", value);
        return;
    }

    // Find the previous node of node to be deleted
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Value %d not found\n", value);
    } else {
        struct Node* del = temp->next;
        temp->next = temp->next->next;
        free(del);
        printf("Deleted %d\n", value);
    }
}

// 5. Search a node
void search(int value) {
    struct Node* temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("%d found at position %d\n", value, position);
            return;
        }
        position++;
        temp = temp->next;
    }

    printf("%d not found in the list\n", value);
}

// 6. Display the list
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d → ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, value, position;

    while (1) {
        printf("\n--- Singly Linked List Operations ---\n");
        printf("1. Insert at Head\n2. Insert at Last\n3. Insert at Position\n");
        printf("4. Delete Node\n5. Search\n6. Display\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtHead(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtLast(value);
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtPosition(value, position);
                break;

            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;

            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(value);
                break;

            case 6:
                display();
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
