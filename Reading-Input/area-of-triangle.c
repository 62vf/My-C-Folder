#include <stdio.h>

int main(void) {
    int base , height;
    printf("Enter base of triangle : ");
    scanf("%d",&base);
    printf("Enter height of triangle : ");
    scanf("%d",&height);

    float area = 0.5 * base * height;

    printf("Area = %.2f\n", area);
    return 0;
}
