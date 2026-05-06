#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
void insert_beginning(int value){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
}

void insert_end(int value){
    struct node *newnode , *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    if(head == NULL){
        head = newnode;
        return;
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void deletion(){
    struct node *temp;
    if(head == NULL){
        printf("insertion not possible\n");
        return;
    }
    temp = head;
    head = head->next ;
    free(temp);
}
void display(){
    struct node *temp;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    temp = head ;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }printf("NULL\n");
}
int main(){
    insert_beginning(10);
    insert_beginning(20);
    insert_end(30);
    insert_end(40);
    printf("Lined list : ");
    display();
    deletion();
    printf("After deletion: ");
    display();
    return 0;
}