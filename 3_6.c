#include <stdio.h>
int main()
{
    int n;
    char c;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c='A';
        for(int k=0;k<=i;k++)
        {
            printf("%c",c);
            c+=2;
        }
        printf("\n");
    }
    return 0;
}