//write a program to encode a word in pig latin
#include <stdio.h>
int main()
{
    char w[100];
    int l=0;
    printf("Enter the word:");
    scanf("%s",w);
    while (w[l]!='\0'){
        l++;
    }
    if(l>0){
        char fc=w[0];
        for(int i=0;i<l-1;i++){
            w[i]=w[i+1];
        }
        w[l-1]=fc;
        printf("Pig Latin:%say\n",w);
    }
    return 0;
}