#include <stdio.h>
//using a third variable
void main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the first and second numbers are %d and %d respectively\n",a,b);
//without using a third variable
    int p,q;
    printf("Enter the first number:");
    scanf("%d",&p);
    printf("Enter the second number:");
    scanf("%d",&q);
    p=p+q;
    q=p-q;//p+q-q=p
    p=p-q;//p+q-(p+q-q)=q
    printf("the first and second numbers are %d and %d respectively",p,q);
}