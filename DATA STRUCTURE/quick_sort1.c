#include <stdio.h>
void quick_sort(int arr[],int lb,int ub);
int partition(int arr[],int lb,int ub);
void swap(int *a,int *b);
int main(){
    int arr[]={21,57,46,63,62,90,19,35};
    int lb = 0;
    int ub = 7;
    quick_sort(arr,lb,ub);
    printf("{");
    for(int i = 0 ; i<=ub ; i++){
        printf(" %d ",arr[i]);
    }printf("}\n");
    return 0;
}
void quick_sort(int arr[],int lb,int ub){
    if(lb<ub){
        int loc = partition(arr,lb,ub);
        quick_sort(arr,lb,loc-1);
        quick_sort(arr,loc+1,ub);
    }
}
int partition(int arr[],int lb,int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end){
        while(arr[start] <= pivot && start < end){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start < end){
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);
    return end;
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}