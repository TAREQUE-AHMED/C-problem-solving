#include<stdio.h>
int main(){
double marks;
printf("Enter your marks in your subject:");
scanf("%lf", &marks);
if(marks>=80 && marks<=100){
    printf("You get A+");
}
    else if(marks>=75 && marks<=79){
        printf("You get A");
    }
    else if(marks>=70 && marks<=74){


    printf("You get A-");
    }
    else if(marks>=65 && marks<=69){
        printf("You get B+");
    }
    else if(marks>=60 && marks<= 64){
        printf("You get B");
    }
    else if(marks>=55 && marks<=59){
        printf("You get C+");
    }
     else if(marks>=50 && marks<=54){
        printf("You get C-");
    }
     else if(marks>=45 && marks<=49){
        printf("You get D+");
    }
     else if(marks>=40 && marks<=44){
        printf("You get D-");
    }
    else {
        printf("You get F");
    }


getch();
}
