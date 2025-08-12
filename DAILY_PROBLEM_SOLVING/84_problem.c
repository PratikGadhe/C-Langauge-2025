#include <stdio.h>
void push(top);
void pop();
void display();
int main(){
    int STACK[100],choice,top,i,x,n;
    top=-1;
    printf("Enter size of stack max=100 : ");
    scanf("%d",&n);
    printf("\nSTACK TABLE");
    printf("\n-----");
    printf("1.push\n2.pop\n3.display\n4.exit\n");
    do{
        printf("Enter Your Choice : ");
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
            printf("Exit point");
            break;
            default:
            printf("Invalid Choice");
        }
    }while(choice <= 4);
    return 0;
}
