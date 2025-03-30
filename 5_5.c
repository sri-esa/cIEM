//write a program to check if a string is palindrome or not
#include <stdio.h>
int main()
{
    char str[100];
    int l=0,f=1;
    printf("Enter a string:");
    scanf("%s",str);
    while(str[l]!='\0'){
        l++;
    }
    for (int i=0,j=l-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            f=0;
            break;
        }
    }
    printf("%s is %s palindrome",str,(f==1)?"":"not");
    return 0;
}