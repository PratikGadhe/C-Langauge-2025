/*
WAP to implement Binary search (recursive method) on a Sorted Array using divide and conquer
*/
#include <stdio.h>
int binary_search(int arr[],int low,int high , int key)
{
    if(low == high)
    {
        if(arr[low] == key)
        {
            return low;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        int mid = (low+high)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            return binary_search(arr , low , mid-1 , key);
        }
        else
        {
            return binary_search(arr , mid+1 , high , key);
        }
    }
}
int main()
{
    int arr[] = {3,6,8,12,14,17,25,29,36,62};
    int n = 10;
    int key;
    printf("Enter a key : ");
    scanf("%d",&key);
    int low = 0 , high = n-1;
    int result = binary_search(arr , low , high , key);
    if(result != -1)
    {
        printf("Key found at %d\n",result);
    }
    else
    {
        printf("Key not found\n");
    }
    return 0;
}