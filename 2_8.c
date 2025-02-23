//write a program to generate all the palindrome numbers within a given range by user
#include <stdio.h>
int main()
{
    int ln,hn,s,m,j;
    printf("Enter the limits:\n");
    scanf("%d%d",&ln,&hn);
    for(int i=ln;i<=hn;i++)
    {
        j=i;s=0;m=0;
        while(j>0)
        {
            m=j%10;
            s=m+(s*10);
            j=j/10;
        }
        if(s==i)
        {
            printf("Palindrome: %d\n",i);
        }
    }
    return 0;
}