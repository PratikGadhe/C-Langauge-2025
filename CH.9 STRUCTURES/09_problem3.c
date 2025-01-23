//Make a structure to store Bank Account Information of a customer of ABC Bank Also, make an alias for it.
#include <stdio.h>
typedef struct bank_account{
    char *name;
    int acct;
} acc ;
int main(){
    acc store ={"pratik gadhe",987654321};
    printf("BANK HOLDER NAME :%s\n",store.name);
    printf("ACOUNT NUMBER :%d\n",store.acct);
    return 0;
}