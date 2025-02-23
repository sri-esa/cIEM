//write a program to generate all krishnamurthy numbers within a given range by user
#include <stdio.h>
int main()
{
    int ln,hn,s,m,j,k;
    printf("Enter the limits:\n");
    scanf("%d%d",&ln,&hn);
    for(int i=ln;i<=hn;i++)
    {
        j=i;k=0;m=0;
        while(j>0)
        {
            s=1;
            m=j%10;
            for(int i=1;i<=m;i++)
            {
                s*=i;
            }
            k+=s;
            j=j/10;
        }
        if(k==i)
        {
            printf("krishnamurthy number:%d\n",i);
        }
    }
    return 0;
}