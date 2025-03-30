//write a program to accept your name and print your name using string
#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter your name:");
    scanf("%s", &name);
    printf("Hello %s!\n",name);
    return 0;
}