/*
Question 11: Write a program to create a binary search tree (BST) by considering the keys in
given order and perform the following operations on it:
(a) Minimum key (b) Maximum key (c) Search for a given key
(d) Find predecessor of a node (e) Find successor of a node (f) Delete a node with given key
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    
    return root;
}

struct Node* findMin(struct Node* root) {
    if (root == NULL) return NULL;
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct Node* findMax(struct Node* root) {
    if (root == NULL) return NULL;
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }
    
    if (key < root->data) {
        return search(root->left, key);
    }
    return search(root->right, key);
}

struct Node* findPredecessor(struct Node* root, int key) {
    struct Node* pred = NULL;
    
    while (root != NULL) {
        if (key > root->data) {
            pred = root;
            root = root->right;
        } else {
            root = root->left;
        }
    }
    return pred;
}

struct Node* findSuccessor(struct Node* root, int key) {
    struct Node* succ = NULL;
    
    while (root != NULL) {
        if (key < root->data) {
            succ = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return succ;
}

struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) return root;
    
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int choice, key;
    struct Node* result;
    
    do {
        printf("\n1. Insert\n2. Find Min\n3. Find Max\n4. Search\n5. Find Predecessor\n");
        printf("6. Find Successor\n7. Delete\n8. Display (Inorder)\n9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter key: ");
                scanf("%d", &key);
                root = insert(root, key);
                printf("Inserted %d\n", key);
                break;
            case 2:
                result = findMin(root);
                if (result) printf("Minimum: %d\n", result->data);
                else printf("Tree is empty\n");
                break;
            case 3:
                result = findMax(root);
                if (result) printf("Maximum: %d\n", result->data);
                else printf("Tree is empty\n");
                break;
            case 4:
                printf("Enter key to search: ");
                scanf("%d", &key);
                result = search(root, key);
                if (result) printf("Key %d found\n", key);
                else printf("Key %d not found\n", key);
                break;
            case 5:
                printf("Enter key: ");
                scanf("%d", &key);
                result = findPredecessor(root, key);
                if (result) printf("Predecessor of %d: %d\n", key, result->data);
                else printf("No predecessor found\n");
                break;
            case 6:
                printf("Enter key: ");
                scanf("%d", &key);
                result = findSuccessor(root, key);
                if (result) printf("Successor of %d: %d\n", key, result->data);
                else printf("No successor found\n");
                break;
            case 7:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                root = deleteNode(root, key);
                printf("Deleted %d\n", key);
                break;
            case 8:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 9:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 9);
    
    return 0;
}