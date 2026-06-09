#include <stdio.h>

int main(void) {
    char name[100];
    if (scanf("%99s", name) != 1) {
        return 1;
    }
    printf("hello %s!!, How you doin?\n", name);
    return 0;
}
