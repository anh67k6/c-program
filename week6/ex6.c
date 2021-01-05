#include<stdio.h>

int main(void){
    int a,b,c;

    int min;

    printf("Input 3 integers:\n");
    scanf("%d %d %d",&a,&b,&c);

    min = (a>b)?b:a;

    min = (min>c)?c:min;

    printf("Min number is %d",min);


    return 0;
}
