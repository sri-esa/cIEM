//write a program to input electricity unit consumed and calculate the total electricity bill
#include <stdio.h>
#include <math.h>
int main()
{
    double bill=0,unit,obill;
    printf("Enter the electricity unit:");
    scanf("%lf",&unit);
    for(int i=0;i<=unit;i++)
    {
        if(bill<=300)
        {
            int j=unit;
            while(j<=50)
            {
                bill+=1.25;
                j++;
            }
            while(j<=100)
            {
                bill+=1.50;
                j++;
            }
            while(j<=200)
            {
                bill+=2.00;
                j++;
            }
            while(j<=300)
            {
                bill+=2.50;
                j++;
            }
        }
        else
        {
            bill+=3.25;
        }
    }
    obill=bill+(bill*0.2);
    printf("The total electricity bill is %.3f rs.",obill);
    return 0;
}