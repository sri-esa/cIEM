//write a program to check whether any input number is armstrong number or not using user defined functions
#include <stdio.h>
int main()
{
    int n, on, r, result =0,d=0;
    printf("Enter a number:");
    scanf("%d",&n);
    on=n;
    while(on!=0){
        on/=10;
        d++;
    }
    on=n;
    while(on!=0){
        r=on%10;
        int p=1;
        for(int i=0;i<d;i++){
            p*=r;
        }
        r+=p;
        on/=10;
    }
    printf("%d is %s an Armstrong number",n,(result==n)?"":"not");
    return 0;
}