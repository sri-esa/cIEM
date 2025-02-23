//write a program to read two numbers and find their products after exchanging last digits
#include <stdio.h>
int main()
{
    int a,b;
    int last_a,last_b;
    int new_a,new_b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    last_a=a%10;
    last_b=b%10;
    new_a=a-last_a+last_b;
    new_b=b-last_b+last_a;
    //printf("%d %d", new_a, new_b);
    //printf("%d %d", last_a, last_b);
    printf("the original and modified products are %d and %d respectively",a*b,new_a*new_b);
    return 0;
}