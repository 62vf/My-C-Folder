#include <stdio.h>

int main() {
    int A, B;
    int result = 1;
    
    scanf("%d %d", &A, &B);
    
    for(int i = 0; i < B; i++) {
        result = result * A;
    }

    printf("%d\n", result);
    
    return 0;
}