//write a program to check a number is disarium or not
#include <stdio.h>
#include <math.h>
int main()
{
    int num,m=0,s,j,k,l;
    printf("Enter the number:");
    scanf("%d", &num);
    j=num;s=0;
        while(j>0)
        {
            j=j/10;
            s++;
        }
        k=num;
        while(k>0)
        {
            l=k%10;
            for(int i=s;i>=1;i--)
            {
                m+= pow(l,i);
                s--;
                break;
            }
            k=k/10;
        }
        if(m==num)
        {
            printf("the number is disarium");
        }
        else{
            printf("the number is not disarium");

        }
    return 0;
}