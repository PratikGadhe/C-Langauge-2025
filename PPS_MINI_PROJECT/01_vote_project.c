#include <stdio.h>
#include <string.h>

#define PASSWORD "admin123"

int votes1 = 0, votes2 = 0, votes3 = 0, votes4 = 0;
int spoiled = 0;

void castVote() {
    int choice;

    printf("\n--- Cast Your Vote ---\n");
    printf("1. BJP\n");
    printf("2. CONGRESS\n");
    printf("3. SHIVSENA\n");
    printf("4. AAP\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice) {
        case 1: votes1++; break;
        case 2: votes2++; break;
        case 3: votes3++; break;
        case 4: votes4++; break;
        default: printf("Invalid choice! Vote counted as spoiled.\n");
                 spoiled++;
    }

    printf("Thanks for voting!\n");
}

void viewVoteCount() {
    char pass[20];
    printf("\nEnter admin password: ");
    scanf("%s", pass);

    if(strcmp(pass, PASSWORD) == 0) {
        printf("\n--- Voting Count ---\n");
        printf("BJP: %d\n", votes1);
        printf("CONGRESS: %d\n", votes2);
        printf("SHIVSENA: %d\n", votes3);
        printf("AAP: %d\n", votes4);
        printf("Spoiled Votes: %d\n", spoiled);
    } else {
        printf("Wrong password! Access denied.\n");
    }
}

void leadingCandidate() {
    printf("\n--- Leading Candidate ---\n");

    if(votes1 > votes2 && votes1 > votes3 && votes1 > votes4)
        printf("BJP is leading.\n");
    else if(votes2 > votes1 && votes2 > votes3 && votes2 > votes4)
        printf("CONGRESS is leading.\n");
    else if(votes3 > votes1 && votes3 > votes2 && votes3 > votes4)
        printf("SHIVSENA is leading.\n");
    else if(votes4 > votes1 && votes4 > votes2 && votes4 > votes3)
        printf("AAP is leading.\n");
    else
        printf("There's a tie or no clear winner yet.\n");
}

int main() {
    int choice;

    while(1) {
        printf("\n=== Online Voting System ===\n");
        printf("1. Cast Vote\n");
        printf("2. View Vote Count (Admin)\n");
        printf("3. View Leading Candidate\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: castVote(); break;
            case 2: viewVoteCount(); break;
            case 3: leadingCandidate(); break;
            case 4: printf("Thank you for using the system!\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}