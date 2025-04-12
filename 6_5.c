//write a program to find greatest common divisor and least common multiple of two numbers using user defined recursive function
#include <stdio.h>
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int m,n;
    printf("Enter two numbers\n:");
    scanf("%d%d",&m,&n);
    printf("GCD :%d\n",gcd(m,n));
    printf("LCM:%d",lcm(m,n));
    return 0;
}