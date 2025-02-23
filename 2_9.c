//write a program to generate all armstrong numbers within a given range by user
#include <stdio.h>
#include <math.h>
int main()
{
    int ln,hn,s,m,j,k,l;
    printf("Enter the limits:\n");
    scanf("%d%d",&ln,&hn);
    for(int i=ln;i<=hn;i++)
    {
        j=i;k=i;s=0;m=0;l=0;
        while(k>0)
        {
            k=k/10;
            l++;
        }
        while(j>0)
        {
            m=j%10;
            s+= pow(m,l);
            j=j/10;
        }
        if(s==i)
        {
            printf("armstrong number: %d\n",i);
        }
    }
    return 0;
}