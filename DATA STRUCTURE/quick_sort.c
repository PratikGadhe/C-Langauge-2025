#include <stdio.h>
void quick_sort_63(int arr[], int lb, int ub);
int partition_63(int arr[], int lb, int ub);
void swap_63(int *a, int *b);
int main()
{
    int arr[] = {60,40,20,95,90,30,50,70};
    int lb = 0;
    int ub = 7;
    quick_sort_63(arr, lb, ub);
    for(int i = 0; i <= ub; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
void quick_sort_63(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition_63(arr, lb, ub);
        quick_sort_63(arr, lb, loc - 1);
        quick_sort_63(arr, loc + 1, ub);
    }
}
int partition_63(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot && start < ub)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        
        if (start < end)
        {
            swap_63(&arr[start], &arr[end]);
        }
    }
    swap_63(&arr[lb], &arr[end]);
    return end;
}
void swap_63(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}