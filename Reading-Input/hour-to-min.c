#include <stdio.h>

int main(void) {
    int hour;

    printf("Enter time in hour : ");
    scanf("%d", &hour);

    int min = 60*hour;
    printf("%d minutes\n",min);
    return 0;
}
