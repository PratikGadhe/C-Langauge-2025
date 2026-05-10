/*
wap to implement selection sort algorithm
*/
#include <stdio.h>
int min , low;
void selection_sort(int arr[] , int n)
{
    for(int k = 0 ; k<n-1;k++)
    {
        low = k;
        min = arr[k];
        for(int j = k+1 ; j<n ;j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                low = j;
            }
        }
        int temp = arr[k];
        arr[k] = arr[low];
        arr[low] = temp;
    }
}
int main()
{
    int arr[]={90,50,20,95,60,30,40,10};
    int n = 8;
    selection_sort(arr,n);
    printf("Selection sort\n");
    for(int i = 0 ; i<n;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");
    return 0;
}