#include<stdio.h>
/*
 write a program for the distance between Rajarbagh and Ashulia is input through the keyboard. Write a program to
convert and print this distance in meter, feet, inches and centimeters.
*/
int main(){
float km,meter,feet,inches,centimeter;
printf("Enter distance from Rajarbagh to Ashulia: ");
scanf("%f",&km);
meter=km*1000; //1km=1000meters
feet=km*3280.8399; //1km=3280.8399 feets
inches= km*39370.078; //1 inches = 39370.078 inches
centimeter = km*100000; // 1 km = 100000 centimeter
printf("Distance in meter from Rajarbagh to Ashulia:%2f\n", meter);
printf("Distance in feet from Rajarbagh to Ashulia:%2f\n", feet);
printf("Distance in inches from Rajarbagh to Ashulia:%2f\n", inches);
printf("Distance in centimeter from Rajarbagh to Ashulia:%2f\n", centimeter);
    getch();
}
