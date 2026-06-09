#include <stdio.h>

int main(void) {
    int length , breadth;
    printf("Enter length(integer value only) : ");
    scanf("%d",&length);
    printf("Enter breadth(integer value only) : ");
    scanf("%d",&breadth);

    int area = length * breadth;
    int parameter = 2 * (length+breadth);

    printf("Area = %d\n" , area);
    printf("Parameter = %d\n" , parameter);
    return 0;
}
