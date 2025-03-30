//write a program to copy string to another string
#include <stdio.h>
int main()
{
    char s[100],d[100];
    int i=0;
    printf("Enter the string value:");
    scanf("%[^\n]", &s);
    while(s[i]!='\0'){
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
    printf("Copied string: %s\n",d);
    return 0;
}