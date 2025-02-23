/*

ABCDE
CDEF
EFG
GH
I

*/
#include <stdio.h>
int main()
{
    int n;
    char c='A';
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        char j=c;
        for(int k=1;k<=i;k++)
        {
            printf("%c",j);
            j++;
        }
        printf("\n");
        c+=2;
    }
    return 0;
}