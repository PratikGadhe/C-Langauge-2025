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