#include <stdio.h>

int main() {
    int n, reversed = 0;
    scanf("%d", &n);
    int original = n;
    while(n > 0) {
        int digit = n % 10;           
        reversed = reversed * 10 + digit;  
        n = n / 10;
    }
    if(original==reversed){
        printf("Palindromic number\n");
    }else{
        printf("No Palindromic number");
    }  
    return 0;
}