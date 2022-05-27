#include<stdio.h>
/*
write a program of Rahat basic salary is input through the keyboard. His dearness allowance is 40% of his basic
salary and house rent is 20% of his basic salary. Write a program to calculate his gross salary
*/
int main(){
double basic_salary, dearness_allowance,house_rent,gross_salary;
    printf("Enter basic salary of Rahat:");
    scanf("%lf", &basic_salary);
    dearness_allowance = 0.4*basic_salary;
    house_rent = 0.2*basic_salary;
    gross_salary= basic_salary-dearness_allowance-house_rent;
    printf("Gross salary of Rahat:%2lf", gross_salary);
    getch();
}
