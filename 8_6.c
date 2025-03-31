//write a program to define a function that takes an integer n as input and dynamically allocates an integer array of size N. the function should return a pointer to the allocated array. also, find the largest and smallest elements of the array
#include <stdio.h>
#include <stdlib.h>
int *allocate(int n){
    return (int *) malloc(n*sizeof(int));
}
void find(int *arr,int n,int *min,int *max){
    *min=*max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<*min)
            *min=arr[i];
        if(arr[i]>*max)
            *max=arr[i];
    }
}
int main()
{
    int n, *arr,min,max;
    printf("Enter size of array:");
    scanf("%d",&n);
    arr=allocate(n);
    if(arr==NULL){
        printf("Memory Allocaton Failed\n");
        return 1;
    }
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    find(arr,n,&min,&max);
    printf("the largest and smallest element is %d and %d respectively",min,max);
    free(arr);
    return 0;
}