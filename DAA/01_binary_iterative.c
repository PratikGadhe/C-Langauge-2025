#include <stdio.h>
int main()
{
    int arr[] = {3,6,8,12,14,17,25,29,36,62};
    int n = 10;
    int key;
    printf("Enter a key : ");
    scanf("%d",&key);
    int result = binary_search(arr,n,key);
}