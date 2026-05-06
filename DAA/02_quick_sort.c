/*
wap to implement the quick sort algorithm 
*/
#include <stdio.h>
void quick_sort(int arr[],int lb , int ub);
int partition(int arr[],int lb ,int ub);
void swap(int *a,int *b);
void quick_sort(int arr[] , int lb , int ub )
{
    if(lb < ub)
    {
        int loc = partition(arr, lb , ub );
        quick_sort(arr , lb , loc-1);
        quick_sort(arr ,loc+1 , ub);
    }
}
int partition(int arr[] , int lb , int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end)
    {
        while(start < ub && arr[start] <= pivot)
        {
            start = start + 1;
        }
        while(arr[end] > pivot)
        {
            end = end - 1;
        }
        if(start < end)
        {
            swap(&arr[start] , &arr[end]);
        }
    }
    // this swap is done to replace the pivot value with arr[end] value 
    swap(&arr[lb],&arr[end]);
    return end;
}
void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b ;
    *b = temp;
}
int main()
{
    int arr[] = {90,50,20,95,60,30,40,10};
    int lb = 0;
    int ub = 7;
    quick_sort(arr , lb , ub);
    printf("ARRAY AFTER SORTING :\n");
    for(int i = 0 ; i <= ub ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}