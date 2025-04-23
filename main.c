#include <stdio.h>
 
int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int a=0;
    int b=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("sum of %d+%d=%d",a,b,sum(a,b));

}