//write a program to find the length of a string
#include <stdio.h>
int main()
{
    int l=0;
    char str[30];
    printf("enter the string value:\t");
    scanf("%[^\n]",str);
    while(str[l]!='\0'){
        l++;
    }
    printf("length of string is %d",l);
    return 0;
}