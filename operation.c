#include <stdio.h>
 

int sum(int a,int b)
{
    return a+b;
}

int diff(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    if(a==0)
    {
        return 0;
    }
    return a/b;
}

int mod(int a,int b)
{
    return a%b;
}