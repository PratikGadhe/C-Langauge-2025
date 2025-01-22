//Write a function to count the occurrence of vowels in a string.
#include <stdio.h>
void count(char name[]);
int main(){
    char name[100];
    printf("Enter a String : ");
    fgets(name,100,stdin);
    count(name);
    return 0;
}
void count(char name[]){
    int count=0;
    for(int i = 0; name[i] != '\0';i++){
        if(name[i] == 'a'){
            count++;
        }
        else if(name[i] == 'e'){
            count ++;
        }
        else if(name[i] == 'i'){
            count ++;
        }
        else if(name[i] == 'o'){
            count ++;
        }
        else if(name[i] == 'u'){
            count ++;
        }
    }
    printf("THE NUMBER OF VOWELS OCCUR ARE %d\n",count);
}