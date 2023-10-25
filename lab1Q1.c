#include <stdio.h>

int main()
{
    int empl_ID,emp_salary_per_hour;
    float working_hours;
    printf("Enter salary per hour:");
    scanf("%d",&emp_salary_per_hour);
    printf("Enter employee ID:");
    scanf("%d",&empl_ID);
    printf("\nEnter working hours of this month:");
    scanf("%f",&working_hours);
    printf("The total salary of the employee(ID=%d)=Rs.%.2f", empl_ID,emp_salary_per_hour*working_hours);
    return 0;
}
