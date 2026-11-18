// Implementation of Producer-Consumer problem using semaphore.
#include <stdio.h>
#include <stdlib.h>

int mutex = 1;  //semaphore used for mutual exclusion
int full = 0;   //filling the buffer
int empty = 10; //size of buffer
int x = 0; //item

void producer()
{
    --mutex;
    ++full;
    --empty;
    x++;
    printf("Producer produces item %d\n",x);
    ++mutex;
}

void consumer()
{
    --mutex;
    --full;
    ++empty;
    printf("Consumer consumes item %d\n",x);
    x--;
    ++mutex;
}
int main()
{
    int n; //choice
    printf("1.Press 1. for Producer \n 2.Press 2. for Consumer \n 3.Press 3. for Exit\n");
    for(int i = 1 ; i > 0 ; i++)
    {
        printf("Enter your choice(1/2/3) : ");
        scanf("%d",&n);

        switch(n)
        {
            case 1 :
                if(mutex == 1 && empty != 0)
                {
                    producer();
                }
                else
                {
                    printf("Buffer is full!\n");
                }
                break;
            case 2 :
                if(mutex == 1 && full!=0)
                {
                    consumer();
                }
                else
                {
                    printf("Buffer is empty!\n");
                }
                break;
            case 3 :
                exit(0);
                break;
        }
    }
}