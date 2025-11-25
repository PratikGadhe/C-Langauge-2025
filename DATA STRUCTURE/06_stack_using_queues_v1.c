/*
Question 6: Write a program to implement a stack using two queues such that the push
operation runs in constant time and the pop operation runs in linear time
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int arr[MAX];
    int front, rear;
} Queue;

Queue q1, q2;

void initQueue(Queue* q) {
    q->front = q->rear = -1;
}

int isEmpty(Queue* q) {
    return q->front == -1;
}

void enqueue(Queue* q, int item) {
    if (q->rear == MAX - 1) return;
    if (q->front == -1) q->front = 0;
    q->arr[++q->rear] = item;
}

int dequeue(Queue* q) {
    if (isEmpty(q)) return -1;
    int item = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return item;
}

void push(int item) {
    enqueue(&q1, item);
    printf("Pushed: %d\n", item);
}

int pop() {
    if (isEmpty(&q1)) {
        printf("Stack is empty\n");
        return -1;
    }
    
    // Move all elements except last from q1 to q2
    while (q1.front != q1.rear) {
        enqueue(&q2, dequeue(&q1));
    }
    
    // Get the last element (top of stack)
    int item = dequeue(&q1);
    
    // Swap q1 and q2
    Queue temp = q1;
    q1 = q2;
    q2 = temp;
    
    printf("Popped: %d\n", item);
    return item;
}

void display() {
    if (isEmpty(&q1)) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack (top to bottom): ");
    for (int i = q1.rear; i >= q1.front; i--) {
        printf("%d ", q1.arr[i]);
    }

}

int main() {
    initQueue(&q1);
    initQueue(&q2);
    
    int choice, item;
    
    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter item: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                pop();
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