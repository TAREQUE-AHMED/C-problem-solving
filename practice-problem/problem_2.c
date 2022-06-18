#include<stdio.h>
int main(){
    int i, n, sum = 0;
    printf("Enter the number of odd: ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++){
        printf("%d", 2 * i - 1);
        sum = sum + (2 * i - 1);
    }
    printf("\n the sum of odd natural number upto %d terms: %d\n", n, sum);
    return 0;

}