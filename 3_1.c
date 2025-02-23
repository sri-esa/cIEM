/*

# # # #
# # # #
# # # #
# # # #

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        for(int k=1;k<=n;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}