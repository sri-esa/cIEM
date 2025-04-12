//write a program to add N natural numbers using function
#include <stdio.h>
int sum(int n){
    return n*(n+1)/2;
}
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Sum of first %d natural numbers:%d",N,sum(N));
    return 0;
}