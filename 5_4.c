//write a program to find vowels and count them in the given string
#include <stdio.h>
int main()
{
    char str[100],d;
    int c=0;
    printf("Enter a string:");
    scanf("%s",str);
    for(int i=0; str[i]!='\0';i++){
        char d=str[i];
        if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='E'||d=='I'||d=='O'||d=='U'){
            c++;
        }
    }
    printf("number of vowels: %d",c);
    return 0;
}