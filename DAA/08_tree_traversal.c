/*
Program to implement Binary Tree Traversal Techniques (Recursive)
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

//function to create a new node

struct node* create_node(int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> left = NULL;
    new_node -> right = NULL;

    return new_node;
}
//left->root->right
void inorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);

}

//root->left->right
void preorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

//left->right->root
void postorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}

int main()
{
    /*
                1
            2       3
        4       5    
    */
   struct node* root;
   root = create_node(1);
   root->left = create_node(2);
   root->right = create_node(3);
   root->left->left = create_node(4);
   root->left->right = create_node(5);

   printf("INORDER TRAVERSAL : ");
   inorder(root);
   printf("\n");

   printf("PREORDER TRAVERSAL : ");
   preorder(root);
   printf("\n");
   printf("POSTORDER TRAVERSAL :");
   postorder(root);
   printf("\n");
   return 0;
}
