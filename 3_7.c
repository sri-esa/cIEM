/*

10001
01010
00100
01010
10001

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(j==i|| j==(n-i-1))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}