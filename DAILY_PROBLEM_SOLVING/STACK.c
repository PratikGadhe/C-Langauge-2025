#include <stdio.h>

int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();

int main(){
    top=-1;
    //Taking Size of STACK as a Input From User
    printf("Enter Size of STACK[Max=100] : ");
    scanf("%d",&n);

    printf("\n\tSTACK OPERATIONS USING ARRAY");
    printf("\n\t----------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4/EXIT");
    do{
        printf("\n Enter the Choice : ");
        scanf("%d",&choice);
        switch (choice){
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            display();
            break;
        case 4 :
            printf("\n\t EXIT POINT");
        default:
            printf("\n\tINVALID CHOICE");
        }
    }
    while(choice <= 4);
    return 0;
}
//display function
void display()
{
    if(top <= -1)
    {
        printf("Stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

//for push STACK should be empty
void push(){
    if(top != -1){
        printf("\n\tSTACK is Overflow");
    }
    else{
        printf("Enter a Value to be pushed : ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

//for pop STACK should be filled with value
void pop(){
    if(top <= -1){
        printf("\n\t Stack is Under Flow");
    }
    else{
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
