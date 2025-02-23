//write a program in c to read a ,b, and c as the sides of a triangle and print the area where area= root(s(s-a)(s-b)(s-c)
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter the length of the first side:");
    scanf("%lf", &a);
    printf("Enter the length of the second side:");
    scanf("%lf", &b);
    printf("Enter the length of the third side:");
    scanf("%lf", &c);
    if(a+b>=c && a+c>=b && b+c>=a)
    {
    s=(a+b+c)/2;
    area=pow((s*(s-a)*(s-b)*(s-c)), 0.5);
    //area= sqrt( s * (s-a) * (s-b) * (s-c) );
    printf("the area of the given triangle is %.3f",area);
    }
    else{
        printf("a valid triangle can't be formed with the given sides");
    }
    return 0;
}