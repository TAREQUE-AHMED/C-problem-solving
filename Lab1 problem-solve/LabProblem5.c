#include<stdio.h>
/*
write a program for  the length & breadth of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area & perimeter of the rectangle, and the area & circumference
of the circle.
*/
int main(){
double length,breadth,pi,radius,area_rectangle,perimeter_rectangle,area_of_circle,circumference_circle;

	printf("Enter the length:");
	scanf("%lf",&length);
	printf("Enter the breadth:");
	scanf("%lf",&breadth);
	printf("Enter the radius:");
	scanf("%lf",&radius);


	area_rectangle=length*breadth;
	perimeter_rectangle=2*(length+breadth);
	area_of_circle=pi*(radius*radius);
	circumference_circle=2*pi*radius;

	printf("Area of rectangle:%.lf\n",area_rectangle);
	printf("Perimeter of rectangle:%.lf\n",perimeter_rectangle);
	printf("Area of circle:%.2lf\n",area_of_circle);
	printf("Perimeter of circle:%.lf\n",	circumference_circle);
	getch();
	}
