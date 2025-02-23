/*

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a=1;
        for(int k=0;k<(n-i);k++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%d ",a);
            a = a*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}