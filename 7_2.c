//write a program to implement an array of structures to store suitable data of multiple employees
#include <stdio.h>
struct Employee{
    char name[50];
    int Emp_id;
    float salary;
};
int main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct Employee emp[n];
    for (int i =0;i<n;i++){
        printf("\nEnter the details of Employee %d:\n",i+1);
        printf("Employee name:\t");
        scanf(" %[^\n]", emp[i].name);
        printf("\nEmployee ID:\t");
        scanf("%d", &emp[i].Emp_id);
        printf("\nSalary:\t");
        scanf("%f", &emp[i].salary);
    }
    printf("\nEmployee details:\n");
    for(int i=0;i<n;i++){
        printf("Name:%s\n",emp[i].name);
        printf("ID:%d\n",emp[i].Emp_id);
        printf("Salary:%.2f\n",emp[i].salary);
    }
    return 0;
}