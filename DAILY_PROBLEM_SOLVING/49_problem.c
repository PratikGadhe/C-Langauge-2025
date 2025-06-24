//1. Write a C program to declare and initialize variables of different data types and display their sizes.
#include <stdio.h>
int main(){
    //declaration and initialize of variable 
    int Roll_number = 57;               //declaring integer
    float marks = 96;                   //decalring float
    char Grade = 'A';                   //Declaring Character 
    long prn_number = 24054491245048;   //Declaring Long
    double cgpa=9.123452;               //decalrinf double
    
    //displaying size of the datatype
    printf("Size of integer datatype %d bytes \n",sizeof(Roll_number));
    printf("Size of Float datatype %d bytes \n",sizeof(marks));
    printf("Size of Char datatype %d bytes \n",sizeof(Grade));
    printf("Size of Long datatype %d bytes \n",sizeof(prn_number));
    printf("Size of Double datatype %d bytes \n",sizeof(cgpa));
    return 0;
}
