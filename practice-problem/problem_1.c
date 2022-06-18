#include<stdio.h>
int main(){
    int numbers[10], i, sum=0;
    printf("Enter your numbers:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 10; i++){
        printf("%d", numbers[i]);
        sum = sum + numbers[i];
    }
    printf("\nSum of 10th number is= %d\n", sum);
    printf("\n Average is = %.02f\n", sum/10.0);
    return 0;
}