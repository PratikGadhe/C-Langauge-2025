/*
Question 8: Write a program to implement a queue using two stacks such that enqueue
operation runs in constant time and dequeue operation runs in linear time
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int arr[MAX];
    int top;
} Stack;

Stack s1, s2;

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int item) {
    if (s->top == MAX - 1) return;
    s->arr[++s->top] = item;
}

int pop(Stack* s) {
    if (isEmpty(s)) return -1;
    return s->arr[s->top--];
}

void enqueue(int item) {
    push(&s1, item);
    printf("Enqueued: %d\n", item);
}

int dequeue() {
    if (isEmpty(&s1) && isEmpty(&s2)) {
        printf("Queue is empty\n");
        return -1;
    }
    
    // If s2 is empty, move all elements from s1 to s2
    if (isEmpty(&s2)) {
        while (!isEmpty(&s1)) {
            push(&s2, pop(&s1));
        }
    }
    
    int item = pop(&s2);
    printf("Dequeued: %d\n", item);
    return item;
}

void display() {
    if (isEmpty(&s1) && isEmpty(&s2)) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue (front to rear): ");
    
    // Print s2 in reverse order (bottom to top)
    for (int i = 0; i <= s2.top; i++) {
        printf("%d ", s2.arr[i]);
    }
    
    // Print s1 in normal order (top to bottom)
    for (int i = s1.top; i >= 0; i--) {
        printf("%d ", s1.arr[i]);
    }
    printf("\n");
}

int main() {
    initStack(&s1);
    initStack(&s2);
    
    int choice, item;
    
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter item: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    
    return 0;
}