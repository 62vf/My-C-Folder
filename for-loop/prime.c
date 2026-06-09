#include <stdio.h>

int main(void) {
    int num , count=0;
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        if(num%i==0){
            count+=1;
        }
    }

    if(count==2){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}
