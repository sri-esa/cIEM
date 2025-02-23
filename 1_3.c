//write a program to find the last digit of a number without using '%' modulus operator
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a-(10*(a/10));
    printf("last digit = %d\n",b);
    //printf("%d without its last digit is %d",a,a/10);
    return 0;
}