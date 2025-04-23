#include <stdio.h>
 
int diff(int a,int b)
{
    return a-b;
}

void main()
{
    int a=0;
    int b=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Differnces between %d-%d=%d",a,b,diff(a,b));
}