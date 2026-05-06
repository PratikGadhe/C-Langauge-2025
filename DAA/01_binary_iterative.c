/*
WAP to implement Binary search (iterative method) on a Sorted Array using divide and conquer
*/

#include <stdio.h>
int binary_search(int arr[] , int n , int key)
{
    int low = 0;
    int high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3,6,8,12,14,17,25,29,36,62};
    int n = 10;
    int key;
    printf("Enter a key : ");
    scanf("%d",&key);
    int result = binary_search(arr,n,key);
    if(result != -1)
    {
        printf("Key found at %d\n",result);
    }
    else
    {
        printf("Key not found!!");
    }
    return 0;
}