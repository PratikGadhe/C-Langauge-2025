//You have to print the character,ch ,in the first line. Then print s in next line. In the last line print the sentence,
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%[^\n]%*c",&ch);
    scanf("%[^\n]%*c",s);
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
