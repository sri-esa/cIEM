#include <stdio.h>
int main()
{
    int m,k;
    printf("Enter the no. of elements:");
    scanf("%d",&m);
    int a[m],f[m];
    for(int i=0;i<m;i++)
    {
        printf("Enter the element of position %d:\t",i);
        scanf("%d",&a[i]);
    }
    for(int n=0;n<m;n++)
    {
        f[n]=0;
    }
    for(int j=0;j<m;j++)
    {
        if(f[j]==1){
        continue;
        }
            k=1;
            for(int l=j+1;l<m;l++)
            {
                if(a[j]==a[l])
                {
                    k++;
                    f[l]=1;
                }
            }
            printf("the frequency of %d is %d\n",a[j],k);
         }
    return 0;
}