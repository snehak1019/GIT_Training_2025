#include <stdio.h>
 
void main()
{
    int a=0;
    int b=0;
    char ch;
    int f=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Press 1 -addition 2-Subraction 3-Multiplication 4-division 5-Modulo q-exit :");
    scanf("%c",&ch);
    switch (ch)
    {
    case '1':sum(a,b);break;
    case '2':diff(a,b);break;
    case '3':mul(a,b);break;
    case '4':div(a,b);break;
    case '5':mod(a,b);break;
    case 'q':f=1;break;    
    default:printf("Invalid");break;
    }

}