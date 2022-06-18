#include<stdalign.h>
int main(){
    int n, arms = 0, r, c;
    printf("Enter any number: ");
    scanf("%d", &n);
    c = n;
    while(n>0){
        r = n % 10;
        arms = (r * r * r) + arms;
        n = n / 10;
    }
    if(c==arms)
        printf("Armstrong Number");
        else
            printf("Not Armstrong number");
        return 0;
}