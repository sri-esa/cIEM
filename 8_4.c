//write a program to find the factorial of the input number using function and pointer
#include <stdio.h>
void fact(int n, long *r){
    *r=1;
    if (n==0)
        *r=1;
    for(int i=1;i<=n;i++){
        *r *=i;
    }
}
int main()
{
    int n;
    long f;
    printf("Enter a number:");
    scanf("%d",&n);
    fact(n,&f);
    printf("factorial=%d",f);
    return 0;
}