#include <stdio.h>

int main(void) {
    int age;
    char name[99];

    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter name: ");
    scanf("%s",name);
    if(age>=18){
        printf("%s is a valid voter.\n",name);
    }else{
        printf("%s is not a valid voter.\n",name);
    }
    return 0;
}
