//write a program to reverse an array
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the no. of elements:");
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        printf("Enter the element of position %d:\t",i);
        scanf("%d",&a[i]);
    }
    printf("The reversed array=\n[\t");
    for(int j=0;j<m;j++)
    {
        printf("%d\t",a[m-j-1]);
    }
    printf("]");
    return 0;
}