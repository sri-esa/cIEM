//write a program to print the summation of digits of a user input given number
#include <stdio.h>
int main()
{
    int s=0,n,m;
    printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
    while((m%10)==0)
    {
        while((m/10)!=0)
        {
            m=m/10;
            break;
        }
    }
    while((m%10)!=0)
    {
        s+=m%10;
        m=m/10;
        break;
    }
    }
    printf("The summation of all the digits of %d is %d",n,s);
    return 0;
}