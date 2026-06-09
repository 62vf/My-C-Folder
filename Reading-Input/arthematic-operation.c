#include <stdio.h>

int main(void) {
    int num1 , num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int multiply = num1 * num2;
    int div = num1 / num2;

    printf("The Sum of %d and %d = %d\n" , num1 , num2 , sum);
    printf("The Sub of %d and %d = %d\n" , num1 , num2 , sub);
    printf("The Multiply of %d and %d = %d\n" , num1 , num2 , multiply);
    printf("The Division of %d and %d = %d\n" , num1 , num2 , div);

    return 0;
}
