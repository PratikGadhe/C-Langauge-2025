//how switch statement works?

#include <stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch (a){
        case 1:
            printf("you enter 1");
            break;
        case 2:
            printf("you enter 2");
            break;
        case 3:
            printf("you enter 3");
            break;
        default:
            printf("nothing matched !");
        
    }
    return 0;
}
// in switch if cases were not matched with the given condition  than it will ignore the cases and print the default condition