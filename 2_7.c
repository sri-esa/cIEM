//write a program to check whether a given number is perfect or not
#include <stdio.h>
int main()
{
    int num,m=0;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i=1;i<=(num/2);i++)
    {
        if(num%i==0)
        {
            m += i;
        }
    }
    if(num == m)
    {
        printf("the number is a perfect number");
    }
    else
    {
        printf("the number isn't a perfect number");
    }
    return 0;
}