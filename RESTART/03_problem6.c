#include<stdio.h>
//n=123
int main()
{
  int n,remainder,store_value=0,count;
  printf("Enter a number : ");
  scanf("%d",&n);
  //reversing the number 
  while(n>0){
    remainder=n%10; //last digit
    store_value=store_value*10+remainder;
    n/=10;
  }
  printf("Reverse Order %d\n",store_value);
  printf("Entered Number in Digit : ");
  while(store_value>0){
    count=store_value%10; //last digit
    switch(count){
      case 1 : printf("One ");
              break;
      case 2 : printf("Two ");
              break;
      case 3 : printf("Three ");
              break;
      case 4 : printf("Four ");
              break;
      case 5 : printf("Five ");
              break;
      case 6 : printf("Six ");
              break;
      case 7 : printf("Seven ");
              break;
      case 8 : printf("Eight ");
              break;
      case 9 : printf("Nine ");
              break;
      default : printf("Something went wrong");
    }
    store_value/=10;
  }printf("\n");
  return 0;     
  }