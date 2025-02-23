//write a program to check whether a number is prime or composite
#include <stdio.h>
#include <math.h>
int main()
{
    int n,f;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n==1)
    {
        printf("The number is non prime");
    }
    f=0;
    for (int i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("The number is composite");
    }
    else
    {
        printf("The number is prime");

    }
    return 0;
}