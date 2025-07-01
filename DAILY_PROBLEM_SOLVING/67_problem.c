//Write a program to accept a number n from user and then accept n array elements from user and
// print maximum and minimum array element from that set of array in C language
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // assuming maximum size is 100
    int max, min;

    // Accept number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Accept array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element
    max = arr[0];
    min = arr[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Output result
    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
