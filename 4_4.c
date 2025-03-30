//write a program to find out the largest and smallest element in an array
#include <stdio.h>
int main()
{
    int m,s,l;
    printf("Enter the no. of elements:");
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        printf("Enter the element of position %d:\t",i);
        scanf("%d",&a[i]);
    }
    s=a[0];l=a[0];
    for(int i=0;i<m;i++)
    {
        if(a[i]<=s)
        {
        s=a[i];
        }
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]>=l)
        {
        l=a[i];
        }
    }
    printf("the largest and smallest elements are %d and % d",l,s);
    return 0;
}