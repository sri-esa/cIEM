//write a program to read and display values in a 2-d array using pointer
#include <stdio.h>
int main()
{
    int m,n;
    printf("enter the no. of rows and columns:\n");
    scanf("%d%d",&m,&n);
    int A[m][n];
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",(*(A+i)+j));
        }
    }
    printf("2-D Array =\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",*(*(A+i)+j));
        }
        printf("\n");
    }

    return 0;
}