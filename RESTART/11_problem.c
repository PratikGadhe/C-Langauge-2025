#include <stdio.h>
int square(int side);
int circle(float radius);
int rectangle(int length , int breadth);

int main(){
    int side,length,breadth,n;
    float radius;
    printf("Enter Your Choice \n");
    printf("1 for Area of Square , 2 for Circle , 3 for Rectangle : ");
    scanf("%d",&n);
    if(n==1){
        printf("Enter Side : ");
        scanf("%d",&side);
        square(side);
    }
    else if (n==2){
        printf("Enter radius : ");
        scanf("%f",&radius);
        circle(radius);
    }
    else if (n==3){
        printf("Enter length : ");
        scanf("%d",&length);
        printf("Enter breadth : ");
        scanf("%d",&breadth);
        rectangle(length,breadth);
    }
    else{
        printf("Wrong Number Entered !");
    }
    return 0;
}

int square(int side){
    side=side*side;
    printf("Area of Square : %d\n",side);
    return 0;
}
int circle(float radius){
    radius=3.14*(radius*radius);
    printf("Area of Circle : %f\n",radius);
    return 0;
}
int rectangle(int length, int breadth){
    printf("Area of Rectangle : %d\n",length*breadth);
    return 0;
}