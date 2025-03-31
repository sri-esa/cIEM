//write a program to create a structure student to store his/her name, roll no., stream and marks
#include <stdio.h>
struct student{
    char name[50],stream[30];
    int roll_no;
    double marks;
};
int main()
{
    struct student A;
    printf("Enter the name of the student:");
    scanf("%[^\n]",A.name);
    printf("Enter the roll number of the student:");
    scanf("%d",&A.roll_no);
    printf("Enter the stream of the student:");
    scanf("%s",A.stream);
    printf("Enter the marks of the student:");
    scanf("%lf",&A.marks);
        printf("\n Student details:\n");
        printf("Name:\t%s\n",A.name);
        printf("Roll no.:\t%d\n",A.roll_no);
        printf("Stream:\t%s\n",A.stream);
        printf("Marks:\t%.3lf\n",A.marks);
    return 0;
}