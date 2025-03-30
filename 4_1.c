//write a program to declare,read and display values in 2-D array
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element of the position %d %d:\t",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Entered array is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}