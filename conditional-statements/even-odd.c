#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num==0){
        printf("The number is 0.\n");
    }else if(num%2==0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }

    return 0;
}
