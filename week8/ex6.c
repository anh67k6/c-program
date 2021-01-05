#include<stdio.h>

int main(void){
    int n;
    int count = 1;

    printf("Input n :\n");
    scanf("%d",&n);

    do{
        printf("%d ",count);
        count = count + 1;
    } while(count < n);

    return 0;
}
