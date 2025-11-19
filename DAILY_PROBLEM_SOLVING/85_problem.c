#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int val) {
    if(rear == SIZE-1)
        printf("Overflow\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = val;  // ✅ increment before storing
    }
}

int dequeue() {
    if(front == -1 || front > rear)
        return -1;
    else
        return queue[front++];
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());

    return 0;
}
