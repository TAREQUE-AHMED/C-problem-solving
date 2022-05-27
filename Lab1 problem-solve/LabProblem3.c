#include<stdio.h>
/*
 write a program, If the marks obtained by a student in five different subjects are input through the keyboard,
find out the aggregate marks and percentage marks obtained by the student. Assume that the
maximum marks that can be obtained by a student in each subject is 100.
*/
int main(){
int
first_subject,second_subject,third_subject,fourth_subject,fifth_subject,aggregate;
	float percentage;
	printf("Enter the number of first subject : ");
	scanf("%d",&first_subject);
	printf("Enter the number of second subject : ");
	scanf("%d",&second_subject);
	printf("Enter the number of third subject : ");
	scanf("%d",&third_subject);
	printf("Enter the number of fourth subject: ");
	scanf("%d",&fourth_subject);
	printf("Enter the number of fifth subject : ");
	scanf("%d",&fifth_subject);

	aggregate=first_subject+second_subject+third_subject+fourth_subject+fifth_subject;
	percentage=aggregate*(100.00/500.00);

	printf("Aggregate mark obtained by student=%d\n",aggregate);
	printf("Percentage of student=%.2f",percentage);
    getch();
}
