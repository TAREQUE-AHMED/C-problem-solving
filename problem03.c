#include<stdio.h>
int main(){
int sallary, bank_amount;
printf("Enter Your Sallary:");
scanf("%d", &sallary);
printf("Enter Your Bank Amount:");
scanf("%d",&bank_amount);
if(sallary== 70000 && bank_amount ==100000){
    printf("You can marry my daughter");
}
    else{
        printf("You can not marry my daughter");
    }

getch();
}
