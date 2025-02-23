//write a program to exchange the last two digits of any user given input number
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a%10; //the last digit
    c=(a/10)%10; //the 2nd last digit
    a=(((((a/10)/10)*10)+b)*10)+c;
    printf("the new number is %d",a);
    return 0;
}