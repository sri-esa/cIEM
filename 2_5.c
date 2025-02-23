//write a program to accept the marksof a student and display their grade.
#include <stdio.h>
int main()
{
    double marks;
    printf("Enter the marks of the student:");
    scanf("%lf",&marks);
    if(marks<0 && marks>100)
    {
        printf("Invalid marks");
    }
    if (marks<40)
    {
        printf("THE STUDENT IS NOT PROMOTED AND THE GRADE IS F");
    }
    else
    {
        if(marks<50)
        {
        printf("THE STUDENT IS PROMOTED AND THE GRADE IS D");
        }
        else if(marks<60)
        {
        printf("THE STUDENT IS PROMOTED AND THE GRADE IS C");
        }
        else if(marks<70)
        {
        printf("THE STUDENT IS PROMOTED AND THE GRADE IS B");
        }
        else if(marks<80)
        {
        printf("THE STUDENT IS PROMOTED AND THE GRADE IS A");
        }
        else if(marks<90)
        {
        printf("THE STUDENT IS PROMOTED AND THE GRADE IS E");
        }
        else if(marks<=100)
        {
        printf("THE STUDENT IS PROMOTED AND THE GRADE IS O");
        }
    }
    return 0;
}