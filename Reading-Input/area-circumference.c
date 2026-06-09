#include <stdio.h>

int main(void) {
    int radius;
    float pi = 3.1416;
    printf("Enter radius : ");
    scanf("%d",&radius);

    float area = pi*(radius*radius);
    float circum = 2*pi*radius;

    printf("Area = %.2f\n",area);
    printf("Circumference = %.2f\n",circum);
    return 0;
}
