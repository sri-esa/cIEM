//write a program to reverse a string using pointer
#include <stdio.h>
#include <string.h>
void rev(char *str){
    int l= strlen(str);
    char *i = str;
    char *f = str+l-1;
    char temp;
    while(i<f){
        temp=*i;
        *i=*f;
        *f=temp;
        i++;
        f--;
    }
}
int main()
{
    char str[100];
    printf("Enter the string value:\n");
    scanf("%[^\n]",str);
    rev(str);
    printf("Reversed string= %s",str);
    return 0;
}