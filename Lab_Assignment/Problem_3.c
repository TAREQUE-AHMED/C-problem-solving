/* Write a program in C to display n terms of odd number and their sum*/
#include<stdio.h>
int main(){
int i, n, sum=0;
 //read data from user
printf("Enter Odd Number: ");
scanf("%d", &n);
  //logic
for (i=1; i<=n; i++){
    printf("%d", 2*i-1);
    sum += (2*i-1);
}
//print data
printf("\n Sum of odd number upto %d terms: %d\n",n,sum);
 getch();
}
