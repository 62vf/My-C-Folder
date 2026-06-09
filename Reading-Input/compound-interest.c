#include <stdio.h>

int main() {
    float P, R, T;
    float amount = 1.0; 
    float CI;

    scanf("%f %f %f", &P, &R, &T);
    float base = 1 + R/100;
    
    for(int i = 0; i < T; i++) {
        amount = amount * base;
    }
    
    CI = P * amount - P;
    printf("%.2f\n", CI);
    return 0;
}