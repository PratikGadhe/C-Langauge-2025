//Enter address (house no, block, city, state) of 5 people.
#include <stdio.h>

typedef struct address{
    int house;
    int block;
    char city[100];
    char state[100];
} add;
void address(add people[],int n);
int main(){
    add people[5];
    for(int i=0;i<=4;i++){
        printf("Enter address of person %d\n",i+1);
        printf("Enter your house number :");
        scanf("%d",&people[i].house);
        printf("Enter Your block number :");
        scanf("%d",&people[i].block);
        printf("Enter your city name :");
        scanf("%s",people[i].city);
        printf("Enter you state :");
        scanf("%s",people[i].state);
    }
    address(people,5);
    return 0;
}
void address(add people[],int n){
    printf("PERSON 1 ADDRESS : house no. %d , block no. %d , %s , %s\n",people[0].house,people[0].block,people[0].city,people[0].state);
    printf("PERSON 2 ADDRESS : house no. %d , block no. %d , %s , %s\n ",people[1].house,people[1].block,people[1].city,people[1].state);
    printf("PERSON 3 ADDRESS : house no. %d , block no. %d , %s , %s\n ",people[2].house,people[2].block,people[2].city,people[2].state);
    printf("PERSON 4 ADDRESS : house no. %d , block no. %d , %s , %s\n ",people[3].house,people[3].block,people[3].city,people[3].state);
    printf("PERSON 5 ADDRESS : house no. %d , block no. %d , %s , %s\n",people[4].house,people[4].block,people[4].city,people[4].state);
}