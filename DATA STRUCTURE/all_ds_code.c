/*
//Write a program to implement stack using arrays
#include <stdio.h>
int n,top=-1,ch;
int data,stack[100];
void push();
void pop();
void display();
int main(){
    printf("Enter Size of Stack : ");
    scanf("%d",&n);
    do{
        printf("Select the operation to be performed on stack\n");
        printf("1.Push\n2.pop\n3.display\n");
        scanf("%d",&ch);
        switch (ch){
            case 1 : push();
            break;
            case 2 : pop();
            break;
            case 3 : display();
            break;
            default : 
            printf("Invalid choice !\n");
        }
        printf("Do You Want to Continue ? press 1 : ");
        scanf("%d",&ch);
    }while(ch == 1);
    return 0;
}
void push(){
    if(top == n-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter a value to be push : ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        printf("Element %d pushed successfully\n", data);
    }
}
void pop(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("Popped Element is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
*/

/*
Question 4: Write a program to implement circular queue using arrays


#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int item) {
    if ((front == 0 && rear == MAX - 1) || (rear == front - 1)) {
        printf("Queue Overflow\n");
        return;
    }
    
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    queue[rear] = item;
    printf("Inserted: %d\n", item);
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    
    printf("Deleted: %d\n", queue[front]);
    
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue: ");
    int i = front;
    do {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    } while (i != (rear + 1) % MAX);
    printf("\n");
}

int main() {
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
*/
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define Max 100
int stack[Max];
int top = -1;
void push(int val){
    if(top == Max - 1){
        printf("Stack Overflow\n");
        return;
    }
    else{
        top++;
        stack[top]=val;
    }
}
int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return -1;
    }
    else{
        return stack[top--];
    }
}
int evaluate(char* exp){
    int i,n1,n2,result;
    for(i=0;exp[i];i++){
        if(isdigit(exp[i])){
            push(exp[i]-'0');
        }
        else{
            n2 = pop();
            n1 = pop();
            switch(exp[i]){
                case '+': result = n1 + n2; break;
                case '-': result = n1 - n2;break;
                case '*': result = n1 * n2;break;
                case '/': result = n1 / n2;break;
            }
            push(result);
        }
    }return pop();
}
int main(){
    char exp[Max];
    printf("Enter a postfix Expression : ");
    scanf("%s",exp);
    printf("Result : %d\n",evaluate(exp));
    return 0;
}
    */

/*
#include <stdio.h>
#include <stdlib.h>
#define Max 100
int stack[Max];
int top = -1;
void push(char c){
    if(top == Max-1)return;
    else{
        top++;
        stack[top]=c;
    }
}
char pop(){
    if(top == -1)return '\0';
    else{
        return stack[top--];
    }
}
int precedence(char op){
    switch(op){
        case '+' :
        case '-' : return 1;
        case '*':
        case '/': return 2;
        case '^':return 3;
    }
    return 0;
}
int is_operator(char c){
    return((c == '+'|| c == '-' || c == '*' || c == '/' || c == '^'));
}
void infix_postfix(char* infix , char* postfix){
    int i=0;
    int j=0;
    for(i=0;infix[i];i++){
        if(infix[i]>='a' && infix[i]<='z'){
            postfix[j++]=infix[i];
        }
        else if(infix[i]== '('){
            push(infix[i]);
        }
        else if(infix[i] == ')'){
            while(top != -1 && stack[top] != '('){
                postfix[j++]=pop();
            }
            pop();
        }
        else if(is_operator(infix[i])){
            while(top != -1 && precedence(stack[top] >= precedence(infix[i]))){
                postfix[j++]=pop();
            }
            push(infix[i]);
        }
    }
    while(top != -1){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
}
int main(){
    char infix[Max],postfix[Max];
    printf("Enter Infix Expression : ");
    scanf("%s",infix);
    infix_postfix(infix,postfix);
    printf("Postfix Expression : %s\n",postfix);
    return 0;
}
    */

/*
Question 5: Write a program to implement double ended queue (dequeue) using arrays


#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

void insertFront(int item) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }
    
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front--;
    }
    deque[front] = item;
    printf("Inserted %d at front\n", item);
}

void insertRear(int item) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }
    
    if (rear == -1) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = item;
    printf("Inserted %d at rear\n", item);
}

void deleteFront() {
    if (front == -1) {
        printf("Deque Underflow\n");
        return;
    }
    
    printf("Deleted %d from front\n", deque[front]);
    
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
}

void deleteRear() {
    if (rear == -1) {
        printf("Deque Underflow\n");
        return;
    }
    
    printf("Deleted %d from rear\n", deque[rear]);
    
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }
    
    printf("Deque: ");
    int i = front;
    do {
        printf("%d ", deque[i]);
        i = (i + 1) % MAX;
    } while (i != (rear + 1) % MAX);
    printf("\n");
}

int main() {
    int choice, item;
    
    do {
        printf("\n1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter item: ");
                scanf("%d", &item);
                insertFront(item);
                break;
            case 2:
                printf("Enter item: ");
                scanf("%d", &item);
                insertRear(item);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);
    
    return 0;
}*/

/*
Question 6: Write a program to implement a stack using two queues such that the push
operation runs in constant time and the pop operation runs in linear time


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
*/

/*
Question 8: Write a program to implement a queue using two stacks such that enqueue
operation runs in constant time and dequeue operation runs in linear time
*/
/*
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
*/
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
//create new node
struct node* create_newnode(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
//insert at head 
void insert_head(int value){
    struct node* newnode = create_newnode(value);
    newnode->next=head;
    head=newnode;
    printf("Inserted %d at head\n",value);
}
//insert at last
void insert_last(int value){
    struct node* newnode = create_newnode(value);
    if(head==NULL){
        head=newnode;
        printf("Inserted %d at last\n",value);
        return;
    }
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    printf("Inserted %d at last\n",value);
}
//insert at position
void insert_position(int value,int position){
    struct node* newnode = create_newnode(value);
    if(position == 1){
        newnode->next=head;
        head=newnode;
        printf("Inserted %d at position %d\n", value, position);
        return;
    }
    struct node* temp = head;
    for(int i = 1 ;temp != NULL && i < position-1;i++){
        temp=temp->next;
    }
    if(temp == NULL){
        printf("Invalid Position\n");
        free(temp);
    }
    else{
        newnode->next = temp;
        temp->next=newnode;
        printf("Inserted %d at position %d\n", value, position);
    }
}
//delete node
void delete(int value){
    if(head == NULL){
        printf("List is Empty\n");
        return;
    }
    struct node* temp = head;
    if(head->data == value){
        head = head->next;
        free(temp);
        printf("Deleted value : %d\n",value);
        return;
    }
    while(temp->next !=NULL && temp->data != value){
        temp=temp->next;
    }
    if(temp->next == NULL){
        printf("Value %d not found\n", value);
    }
    else{
        struct node* del = temp->next;
        temp->next=temp->next->next;
        free(del);
        printf("Deleted %d\n",value);
    }
}
//search
void search(int value){
    struct node* temp = head;
    int position = 1;
    while(temp != NULL){
        if(temp->data == value){
            printf("%d found at position %d\n", value, position);
            return;
        }
        position++;
        temp=temp->next;
    }printf("%d not found in the list\n", value);
}
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* temp=head;
    printf("Linked list : ");
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int choice , value , position;
    do{
        printf("\n--- Singly Linked List Operations ---\n");
        printf("1. Insert at Head\n2. Insert at Last\n3. Insert at Position\n");
        printf("4. Delete Node\n5. Search\n6. Display\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert_head(value);
                break;
                case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insert_last(value);
                break;

            case 3:
                printf("Enter value: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                insert_position(value, position);
                break;

            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                delete(value);
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
                break;

            default:
                printf("Invalid choice\n");
            }
        }while(choice!=7);
    return 0;
}