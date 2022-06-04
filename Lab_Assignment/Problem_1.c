/* Write a program in C to display n terms of natural number and their sum*/
#include<stdio.h>
int main(){
int i, n, sum= 0;
//read data from user
printf("Enter the value of terms: ");
scanf("%d", &n);
printf("First %d Natural number are: %\n", n);
//logic
 for (i=1; i<=n; i++){
    printf("%d", i);
    sum +=i;

 }
 //print data
 printf("\n Sum of natural numbers upto %d terms: %d\n", n, sum);
 getch();
}
