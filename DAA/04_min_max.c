/*
wap to find the min and max using divide and conquer
*/
#include <stdio.h>
int min , max;
void min_max(int arr[], int low , int high)
{
    int min1 , min2 ;
    int max1 , max2 ;
    //if arr have only one element 
    if(low == high)
    {
        min = arr[low];
        max = arr[low];
    }

    //if array have two element 
    else if (high == low+1)
    {
        if(arr[low] < arr[high])
        {
            min = arr[low];
            max = arr[high];
        }
        else
        {
            min = arr[high];
            max = arr[low];
        }
    }
    //more than two elements
    else
    {
        int mid = (low+high)/2;
        //function call to left part of the list
        min_max(arr , low , mid);
        min1 = min;
        max1 = max;
        //function call to right part of the list
        min_max(arr,mid+1,high);
        min2 = min;
        max2 = max;

        if(min1 < min2)
        {
            min = min1;
        }
        else
        {
            max = max2;
        }

    }
}
int main()
{
    int arr[] = {10,4,20,90,1};
    int n = 5;
    min_max(arr , 0 , n-1);
    printf("maximum : %d and minimum : %d\n",max,min);
    return 0;
}