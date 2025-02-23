/*

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=0;
        for(int k=0;k<=(n-i-1);k++)
        {
            printf("  ");
        }
        for(int j=0;j<i;j++)
        {
            a++;
            printf("%d ",a);
        }
        for(int l=i;l>1;l--)
        {
            a--;
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}