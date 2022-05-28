#include<stdio.h>
/*
If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to
determine the youngest of the three
*/
int main()
{
	int tareque,rahat,robin;


	printf("Enter the age of tareque:");
	scanf("%d",&tareque);
	printf("Enter the age of rahat:");
	scanf("%d",&rahat);
	printf("Enter the age of robin:");
	scanf("%d",&robin);


	if(tareque<rahat && tareque<robin)
	{
		printf("tareque is younger");
	}
	else if(robin<rahat && robin<tareque)
	{
		printf("robin is younger");
	}

	else{

		printf("rahat is younger");
	}



	getch();


}
