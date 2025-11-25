/*
Question 2: Write a program to evaluate a given postfix expression using stacks
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    else{
        top++;
        stack[top] = val;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int evaluatePostfix(char* exp) {
    int i, val1, val2, result;
    
    for (i = 0; exp[i]; i++) {
        if (isdigit(exp[i])) {
            // Convert character digit to integer: '5' - '0' = 53 - 48 = 5
            push(exp[i] - '0');
        }
        else {
            val2 = pop();
            val1 = pop();
            
            switch (exp[i]) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
            }
            push(result);
        }
    }
    // After processing all characters, stack has only one element: the final result
    return pop(); 
}

int main() {
    char exp[MAX];//string
    printf("Enter postfix expression: ");
    scanf("%s", exp);
    printf("Result: %d\n", evaluatePostfix(exp));
    return 0;
}