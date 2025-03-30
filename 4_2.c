//write a program to copy the elemnts of one array to another array
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the no. of elements:");
    scanf("%d",&m);
    int a[m],b[m];
    for(int i=0;i<m;i++)
    {
        printf("Enter the element of position %d:\t",i);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("The copied array=\n[\t");
    for(int j=0;j<m;j++)
    {
        printf("%d\t",b[j]);
    }
    printf("]");
    return 0;
}