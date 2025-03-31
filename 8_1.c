//write a program to add two numbers using pointer and also print the addresses of integer variables
#include <stdio.h>
int sum(int a,int b){
    int *p,*q;
    p=&a;
    q=&b;
    printf("address of the two variables are \n%p \nand \n%p",p,q);
    printf("\nSum=%d",(*p+*q));
    return 0;
}
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}