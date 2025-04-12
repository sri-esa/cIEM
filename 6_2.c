//write a program to perform bubble sort in decreasing order in a user defined array
#include <stdio.h>
int main(){
    int arr[100],s,i,j,t;
    printf("Enter the number of elements:");
    scanf("%d",&s);
    printf("Enter %d elemnts:\n",s);
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s-1;i++){
        for(j=0;j<s-i-1;j++){
            if(arr[j]<arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("Sorted array in descending order:");
    for(i=0;i<s;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}