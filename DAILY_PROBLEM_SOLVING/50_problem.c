//2. Implement logical operations in C programs and display the results.

#include <stdio.h>

int main() {
    int attendance;
    int marks;

    // Input from user
    printf("Enter your attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter your average marks: ");
    scanf("%d", &marks);

    // Logical AND: both conditions must be true
    if (attendance >= 75 && marks >= 40) {
        printf("You are eligible to sit for the exam.\n");
    } else {
        printf("You are NOT eligible to sit for the exam.\n");
    }

    // Logical OR: at least one condition must be true
    if (attendance >= 75 || marks >= 40) {
        printf("You may get permission to sit for the exam\n");
    } else {
        printf("You are completely disqualified.\n");
    }

    // Logical NOT: reverse the result
    if (!(attendance >= 75)) {
        printf("Warning: Your attendance is below the required level.\n");
    }

    return 0;
}
