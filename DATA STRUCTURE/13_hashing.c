/*
Question 13: Write a program to implement hashing with
(a) Separate Chaining and (b) Open addressing methods
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

// Separate Chaining
struct Node {
    int data;
    struct Node* next;
};

struct Node* chainTable[SIZE];

// Open Addressing
int openTable[SIZE];
int occupied[SIZE];

void initChaining() {
    for (int i = 0; i < SIZE; i++) {
        chainTable[i] = NULL;
    }
}

void initOpenAddressing() {
    for (int i = 0; i < SIZE; i++) {
        openTable[i] = -1;
        occupied[i] = 0;
    }
}

int hashFunction(int key) {
    return key % SIZE;
}

// Separate Chaining Methods
void insertChaining(int key) {
    int index = hashFunction(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = chainTable[index];
    chainTable[index] = newNode;
    printf("Inserted %d at index %d (Chaining)\n", key, index);
}

void searchChaining(int key) {
    int index = hashFunction(key);
    struct Node* temp = chainTable[index];
    
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Key %d found at index %d (Chaining)\n", key, index);
            return;
        }
        temp = temp->next;
    }
    printf("Key %d not found (Chaining)\n", key);
}

void displayChaining() {
    printf("Hash Table (Separate Chaining):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("[%d]: ", i);
        struct Node* temp = chainTable[i];
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Open Addressing Methods (Linear Probing)
void insertOpenAddressing(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    
    while (occupied[index] == 1) {
        index = (index + 1) % SIZE;
        if (index == originalIndex) {
            printf("Hash table is full\n");
            return;
        }
    }
    
    openTable[index] = key;
    occupied[index] = 1;
    printf("Inserted %d at index %d (Open Addressing)\n", key, index);
}

void searchOpenAddressing(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    
    while (occupied[index] == 1) {
        if (openTable[index] == key) {
            printf("Key %d found at index %d (Open Addressing)\n", key, index);
            return;
        }
        index = (index + 1) % SIZE;
        if (index == originalIndex) {
            break;
        }
    }
    printf("Key %d not found (Open Addressing)\n", key);
}

void displayOpenAddressing() {
    printf("Hash Table (Open Addressing):\n");
    for (int i = 0; i < SIZE; i++) {
        if (occupied[i] == 1) {
            printf("[%d]: %d\n", i, openTable[i]);
        } else {
            printf("[%d]: Empty\n", i);
        }
    }
}

int main() {
    initChaining();
    initOpenAddressing();
    
    int choice, method, key;
    
    do {
        printf("\n1. Insert\n2. Search\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <= 3) {
            printf("Choose method (1-Chaining, 2-Open Addressing): ");
            scanf("%d", &method);
        }
        
        switch (choice) {
            case 1:
                printf("Enter key: ");
                scanf("%d", &key);
                if (method == 1) insertChaining(key);
                else insertOpenAddressing(key);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                if (method == 1) searchChaining(key);
                else searchOpenAddressing(key);
                break;
            case 3:
                if (method == 1) displayChaining();
                else displayOpenAddressing();
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    
    return 0;
}