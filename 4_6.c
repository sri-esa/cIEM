//write a program matrix addition and multiplication operation with a 3x3 user defined matrix and print the final matrix accordingly
#include <stdio.h>
int main()
{
    int m,n,k;
    printf("Enter the no. of rows and columns of matrix 1 and 3:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the no. of columns of matrix 2:\n");
    scanf("%d",&k);
    int m1[m][n],m2[n][k],m3[m][n],s[m][n],M[m][k];
        printf("Enter the elements of matrix 1:\n");
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter the elements of matrix 2:\n");
        for(int i=0;i<n;i++){
            for(int j =0;j<k;j++){
                scanf("%d",&m2[i][j]);
            }
        }
        printf("Enter the elements of matrix 3:\n");
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                scanf("%d",&m3[i][j]);
            }
        }
    //addition
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            s[i][j]=m1[i][j]+m3[i][j];
        }
    }
    //multiplication
    for(int i=0;i<m;i++){
        for(int j =0;j<k;j++){
            M[i][j]=0;
            for(int l=0;l<n;l++){
                M[i][j]+=m1[i][l]*m2[l][j];
            }
        }
    }
        printf("Sum of the matrice 1 and 3 :\n");
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                printf("%d\t",s[i][j]);
            }
            printf("\n");
        }
        printf("Product of the matrice 1 and 2 :\n");
        for(int i=0;i<m;i++){
            for(int j =0;j<k;j++){
                printf("%d\t",M[i][j]);
            }
            printf("\n");
        }
    return 0;
}