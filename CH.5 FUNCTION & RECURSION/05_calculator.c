#include <stdio.h>

int sum(int x, int y);
int difference(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int modular(int x , int y);

int main()
{
    int a, b;
    printf("Enter A :");
    scanf("%d", &a);

    printf("Enter B :");
    scanf("%d", &b);

    char ch;
    while (getchar() != '\n');
    printf("Enter arthmatic operator {+ - * / }:");
    scanf("%c", &ch);

    int s, d, m, D, M;

    if (ch == '+')
    {
        s = sum(a, b);
        printf("Sum is :%d\n", s);
    }
    else if (ch == '-')
    {
        d = difference(a, b);
        printf("difference is :%d\n", d);
    }
    else if (ch == '*')
    {
        m = multiplication(a, b);
        printf("Multiplication is :%d\n", m);
    }
    else if (ch == '/')
    {
        D = division(a, b);
        printf("Division is :%d\n", D);
    }
    else if (ch == '%')
    {
        M = modular(a, b);
        printf("Remainder is :%d\n", M);
    }
    else
    {
        printf("YOU ENTERED WRONG CHARACTER ! ");
    }
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}
int difference(int x, int y)
{
    return x - y;
}
int multiplication(int x, int y)
{
    return x * y;
}
int division(int x, int y)
{
    return x / y;
}
int modular(int x , int y)
{
    return x%y;
}
