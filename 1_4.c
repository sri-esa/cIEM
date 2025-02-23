//write a program to double the last digit of any user given input number
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=2*(a%10);
    a=((a/10)*10)+b;
    printf("the new number is %d",a);
    return 0;
}