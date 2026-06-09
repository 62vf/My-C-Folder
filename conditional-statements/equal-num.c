#include <stdio.h>

int main(void) {
    int num1,num2;
    scanf("%d %d" , &num1,&num2);

    if(num1==num2){
        printf("Equal\n");
    }else{
        printf("Not Equal\n");
    }
    return 0;
}
