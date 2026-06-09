#include <stdio.h>

int main(void) {
    int num;
    scanf("%d",&num);

    while(num!=0){
        int digit = num%10;
        printf("%d\n", digit);
        num = num/10;
    }
    return 0;
}
