#include<stdio.h>
int main(){
    int i, j = 1, number;
    printf("Enter the number to find factorial: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++){
        printf("%d", i);
        j = j * i;
    }
    printf("\n");
    printf("The factorial of %d is : %d\n", number, j);
    return 0;
}
