/* Write a C program code to calculate area of rectangle
 1. using hard coded input
 2. taking input from users */

 #include <stdio.h>
 int main(){
    
    //1.
    int l=4;
    int b=2;
    int area=l*b;
    printf("Area of rectangle :%d\n",area); 
    
   //2.
   int length, breadth;
   printf("Enter length:");
   scanf("%d",&length);

   printf("Enter breadth:");
   scanf("%d",&breadth);
   printf("Area of rectangle:%d",length*breadth);

   return 0;
 }