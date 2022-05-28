#include<stdio.h>
/*
 Any integer is input through the keyboard. Write a program to find out whether it is an odd
number or even number.
*/
int main()
{
	int number_1;

	printf("Enter the number :");
	scanf("%d",&number_1);

	if(number_1%2==0){

		printf("Even Number");

	}
	else
	{
			printf("Odd Number");
	}

	getch();

}
