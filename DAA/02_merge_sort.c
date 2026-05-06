/*
wap to implement the merge sort algorithm 
*/
#include <stdio.h>
void merge(int arr[], int low ,int mid , int high)
{
    int i = low;
    int j = mid + 1;
    int temp[100];
    int k=0;
    while(i <= mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[k] = arr[i];
            i++,k++;
        }
        else
        {
            temp[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=mid)
        {
            temp[k]=arr[i];
            i++,k++;
        }
    while(j<=high)
        {
            temp[k]=arr[j];
            j++,k++;
        }
    i = low;
    k = 0;
    while(i<=high)
        {
            arr[i]=temp[k];
            i++,k++;
        }
}

void merge_sort(int arr[], int low , int high)
{
    
    if(low < high)
    {
        int mid = (low + high)/2;
        merge_sort(arr , low , mid);
        merge_sort(arr , mid+1 ,high);
        merge(arr , low , mid , high);
    }
}

int main()
{
    int arr[]= {90,50,20,95,60,30,40,10};
    int n = 8;
    merge_sort(arr,0,n-1);
    for(int i = 0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");
    return 0;
}